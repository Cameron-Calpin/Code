package main

import "fmt"

type Adder struct {
	start int
}

func (a Adder) AddTo(val int) int {
	return a.start + val
}

func main() {
	myAdder := Adder{start: 10}
	fmt.Println(myAdder.AddTo(5)) // prints 15

	// assign method to a variable or passi t to a parameter
	// of type func(int)int. this is called a method value.
	f1 := myAdder.AddTo
	fmt.Println(f1(10)) // prints 20

	// create a function from the type itself. This is called
	// a method expression.
	f2 := Adder.AddTo
	fmt.Println(f2(myAdder, 15))
}
