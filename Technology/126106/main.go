package main

import (
	"fmt"
)

func HelloCodeCup(n int) string {
	codecup := "Hello CodeCup "
	res := fmt.Sprint(codecup, n)
	return res
}

func main() {
	str := HelloCodeCup(6)
	fmt.Println(str)
}
