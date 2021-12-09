package main

import (
	"fmt"
	"errors"
)

// We can delcare all params by stating type
// at end of last parameter name
func divAndRemainder(numerator, denominator int) (
	result int, remainder int, err error) {

	// assign some values
	result, remainder = 20, 30
	if denominator == 0 {
		return 0, 0, errors.New("cannot divide by zero")
	}
	return numerator / denominator, numerator % denominator, nil
}

func main() {
	x, y, z := divAndRemainder(5, 2)
	fmt.Println(x, y, z)
}
