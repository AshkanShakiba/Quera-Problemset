package main
import "fmt"

func main(){
	answer:=1
	var word string
	fmt.Scan(&word)
	for i:=0;i<len(word);i++ {
		var l=word[i]
		if l=='a' || l=='e' || l=='i' || l=='o' || l=='u' {
			answer*=2	
		}
	}
	fmt.Print(answer)
}