package main
import (
	"fmt"
	"strconv"
)

func main(){
	var k int
	var wall="#######"
	var space="......."
	var exhibition=""

	fmt.Scan(&k)

	for i:=1;i<=8;i++ {
		if i%2==1 {
			exhibition+="\n#"+wall+space+wall+"#\n#"
		} else {
			exhibition+=space
		}
		if i<=k {
			exhibition+="ghorfe"+strconv.Itoa(i)
		} else {
			exhibition+=space
		}
		if i%2==0 {
			exhibition+="#"
		}
	}
	exhibition+="\n#"+wall+wall+wall+"#\n"

	fmt.Print(exhibition)
}