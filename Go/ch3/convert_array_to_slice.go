package main

import "fmt"

func main() {
	// Be aware that that taking a slice from
	// an array has the same meory-sharing properties
	// as taking a slice from a slice. 
	x := [4]int{5, 6, 7, 8}
	y := x[:2]
	z := x[2:]
	x[0] = 10
	fmt.Println("x:", x)
	fmt.Println("y:", y)
	fmt.Println("z:", z)
}