package main

import (
	"fmt"
	"time"

	"gorm.io/gorm"
)

func main() {

}

// TODO: Functions

func RefreshDatabase(db *gorm.DB, tables []interface{}) (string, error) {
	for _, t := range tables {
		if err := db.Migrator().DropTable(t); err != nil {
			return "", err
		}
	}

	if err := db.AutoMigrate(&User{}, &Calendar{}, &Appointment{}, &TaskList{}); err != nil {
		return "", err
	}

	return "Refresh database successfully done", nil
}

func SeedUser(db *gorm.DB, username, firstName, lastName, calendarName, appointmentSubject string, startDate time.Time) (string, error) {
	err := db.Create(
		&User{
			Username: username,
			Calendar: Calendar{
				Name: calendarName,
				Appointments: []Appointment{
					{
						Subject:   appointmentSubject,
						StartTime: startDate,
					},
				},
			},
			FirstName: firstName,
			LastName:  lastName,
		}).Error

	if err != nil {
		return "", err
	}

	return "Seeding database successfully done", nil
}

// updateAppointment updates the start time and description of appointments that match the given criteria.
func updateAppointment(db *gorm.DB, calendarName string, startTime time.Time, endTime time.Time, keyword string) error {
	// bullshit from GPT
	var appointments []Appointment
	err := db.Where("calendar_name = ? AND start_time BETWEEN ? AND ? AND subject LIKE ?", calendarName, startTime, endTime, "%"+keyword+"%").Find(&appointments).Error
	if err != nil {
		return err
	}

	for i := range appointments {
		appointments[i].StartTime = appointments[i].StartTime.Add(time.Hour)
		appointments[i].Description += " event"
		err = db.Save(&appointments[i]).Error
		if err != nil {
			return err
		}
	}

	return nil
}

// UserWithRangeAppointment returns a function that can be used as a scope to find users with appointments within the specified range.
func UserWithRangeAppointment(startDate, endDate time.Time, subject string, calendarTableName string) func(db *gorm.DB) *gorm.DB {
	// bullshit from GPT
	return func(db *gorm.DB) *gorm.DB {
		return db.Joins(fmt.Sprintf("JOIN %s ON %s.user_id = users.id", calendarTableName, calendarTableName)).
			Joins(fmt.Sprintf("JOIN appointments ON appointments.calendar_id = %s.id", calendarTableName)).
			Joins("JOIN appointment_user ON appointment_user.appointment_id = appointments.id").
			Joins("JOIN users ON appointment_user.user_id = users.id").
			Where("appointments.start_time BETWEEN ? AND ?", startDate, endDate).
			Where("appointments.subject = ?", subject)
	}
}

type User struct {
	gorm.Model
	Username  string
	FirstName string
	LastName  string
	Calendar  Calendar `gorm:"foreignKey:UserID;"`
}

type Calendar struct {
	gorm.Model
	Name         string
	UserID       uint
	Appointments []Appointment `gorm:"foreignKey:ID;"`
}

type Appointment struct {
	gorm.Model
	Subject     string
	Description string
	StartTime   time.Time
	Length      uint
	OwnerID     uint
	OwnerType   string
	Attendees   []User `gorm:"many2many:appointment_user"`
}

type TaskList struct {
	gorm.Model
	Appointments []Appointment `gorm:"foreignKey:ID;"`
}
