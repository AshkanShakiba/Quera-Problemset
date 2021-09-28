package main
import "fmt"

func main(){
	var a,b,c,d string
	fmt.Scan(&a,&b,&c,&d)
	if a==b || a==d || b==c || c==d {fmt.Print("YES")} else {fmt.Print("NO")}
}