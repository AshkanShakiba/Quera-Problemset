package main

import (
	"fmt"
	"math"
)

func GuessMyNumber(game Game) string {
	var s int = 1
	var e int = 360
	for {
		var m int = int(math.Ceil(float64((e + s) / 2)))
		var answer string = game.CheckNumber(m)
		if answer == "My Number is Greater" {
			s = m + 1
		}
		if answer == "My Number is Lower" {
			e = m - 1
		}
		if answer == "CORRECT" {
			result := fmt.Sprintf("%s%d", "Your Number was ", m)
			return result
		}
	}
	// _ = game.CheckNumber(0)
	// return ""
}
