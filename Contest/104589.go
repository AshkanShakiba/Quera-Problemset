package main
import "fmt"

func main(){
	var n,i int
	fmt.Scan(&n)
	for i=2;i<=n;i++ {
		if n%i==0 {
			break
		}
	}
	fmt.Print(n/i)
}