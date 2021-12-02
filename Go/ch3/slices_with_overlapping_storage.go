package main

import "fmt"

func main() {
	// Changing x modified both y and z, 
	// while changes to y and z modified x
	x := []int{1, 2, 3, 4}
	y := x[:2]
	z := x[1:]
	fmt.Println("x:", x)
	fmt.Println("y:", y)
	fmt.Println("z:", z)
	
	x[1] = 20
	y[0] = 10
	z[1] = 30
	fmt.Println("x:", x)
	fmt.Println("y:", y)
	fmt.Println("z:", z)
}