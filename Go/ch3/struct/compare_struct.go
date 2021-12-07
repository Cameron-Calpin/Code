package main

import "fmt"

func main() {

	type firstPerson struct {
		name string
		age  int
	}

	f := firstPerson {
		name: "Bob",
		age: 50,
	}

	var g struct {
		name string
		age  int
	}

	// compiles -- can use = and == between
	// identical named and anonymous structs
	g = f
	fmt.Println(f == g)
}