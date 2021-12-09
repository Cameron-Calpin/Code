package main

import (
	"fmt"
	"errors"
)

func divAndRemainder(numerator int, denominator int) (
	result int, remainder int, err error) {
	if denominator == 0 {
		err = errors.New("cannot divide by zero")
		return result, remainder, err
	}
	result, remainder = numerator/denominator, numerator%denominator
	return result, remainder, err
}

func main() {
	x, y, z := divAndRemainder(5, 2)
	fmt.Println(x, y, z)
}