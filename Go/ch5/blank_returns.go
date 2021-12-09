package main

import (
	"fmt"
	"errors"
)

func divAndRemainder(numerator, denominator int) (
	result int, remainder int, err error) {

	if denominator == 0 {
		err = errors.New("cannot divide by zero")
		return
	}
	result, remainder = numerator/denominator, numerator%denominator
	return
}


func main() {
	x, y, z := divAndRemainder(5, 2)
	fmt.Println(x, y, z)
}