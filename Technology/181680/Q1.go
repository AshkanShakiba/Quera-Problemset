package main
import ("fmt")

func main() {
  var w int
  var s int
  var i int

  fmt.Scan(&w)
  fmt.Scan(&s)
  fmt.Scan(&i)

  var r = 24 - (w+s-i)
  fmt.Println(r)
}
