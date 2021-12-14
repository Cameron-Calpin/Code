package main

import "fmt"

type Inner struct {
	X int
}

type Outer struct {
	Inner
	X int
}

func main() {
	// You can only access the X on Inner by specifying Inner explicitly
	o := Outer{
		Inner: Inner{
			X: 10,
		},
		X: 20,
	}
	fmt.Println(o.X)       //prints 20
	fmt.Println(o.Inner.X) // prints 10
}
