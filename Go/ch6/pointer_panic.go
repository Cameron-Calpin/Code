package main

import "fmt"

func main() {
	var x *int
	fmt.Println(x == nil) // prints true
	fmt.Println(*x)       // panics
}
