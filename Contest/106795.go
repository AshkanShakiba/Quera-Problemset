package main
import "fmt"

func main(){
	var s1,s2 string
	fmt.Scan(&s1,&s2)
	if s1[0]==s2[len(s2)-1] {
		fmt.Print("YES")
	} else {
		fmt.Print("NO")
	}
}