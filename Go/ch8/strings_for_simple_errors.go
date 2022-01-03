package main

import (
	"errors"
	"fmt"
)

// If you pass an error to fmt.Println, it calls the Error
// method automatically
func doubleEven1(i int) (int, error) {
	if i%2 != 0 {
		return 0, errors.New("only even numbers are processed")
	}
	return i * 2, nil
}

// Second way is to use the fmt.Errorf function.
// This function allows you to use all of the formatting
// verbs for fmt.Printf to create an error.
func doubleEven2(i int) (int, error) {
	if i%2 != 0 {
		return 0, fmt.Errorf("%d isn't an even number", i)
	}
	return i * 2, nil
}

func main() {
	result1, err1 := doubleEven1(12)
	result2, err2 := doubleEven2(14)

	result3, err3 := doubleEven1(3)
	result4, err4 := doubleEven2(5)

	fmt.Println("result1:", result1)
	fmt.Println("err1:", err1)
	fmt.Println("result2:", result2)
	fmt.Println("err2:", err2)
	fmt.Println("result3:", result3)
	fmt.Println("err3:", err3)
	fmt.Println("result4:", result4)
	fmt.Println("err4:", err4)
}
