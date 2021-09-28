package main
import "fmt"

func main(){
	n:=0
	var x int
	for i:=0;i<5;i++ {
		fmt.Scan(&x)
		if x>=80 {n++}
	}
	if n>=3 {
		fmt.Print("Mamma mia!")
	} else if n>=1 {
		fmt.Print("Mamma mia!!")
	} else {
		fmt.Print("Mamma mia!!!")
	}
}