package main

import "fmt"

type MyInt int

func main() {
	var i interface{}
	var mine MyInt = 20
	i = mine
	i2 := i.(MyInt)
	fmt.Println(i2)

	// code panics if type assertion is wrong. Observe.
	// i3 := i.(string)
	// fmt.Println(i3)

	// type assertion must match the type of the underlying value.
	// Of course, it panics.
	// i4 := i.(int)
	// fmt.Println(i4 + 2)

	// comma idiom, this will work
	i5, ok := i.(int)
	if !ok {
		fmt.Errorf("unexpected type for %v", i)
	}
	fmt.Println(i5 + 1)
}
