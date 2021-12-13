package main

import "fmt"

func main() {
	x := 10
	pointerToX := &x

	fmt.Println("pointerToX:", pointerToX)   // prints a memory address
	fmt.Println("*pointertoX:", *pointerToX) // prints 10
	z := 5 + *pointerToX
	fmt.Println("z:", z) // prints 15

	var yeet int32 = 10
	var y bool = true
	pointerX := &yeet
	pointerY := &y
	fmt.Println("pointerX:", pointerX)
	fmt.Println("pointerY:", pointerY)

}
