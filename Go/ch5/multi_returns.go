package main

import (
	"fmt"
	"errors"
	"os"
)

func divAndRemainder(numerator int, denominator int) (int, int, error) {
	if denominator == 0 {
		return 0, 0, errors.New("cannot divide by zero")
	}
	return numerator / denominator, numerator % denominator, nil
}

func main() {
	divide, modulus, error := divAndRemainder(7, 3)
	fmt.Println("divide:", divide, 
				"\nmodulus:", modulus,
				"\nerror:", error)

	divide2, modulus2, error2 := divAndRemainder(3, 0)
	fmt.Println("\ndivide2:", divide2, 
				"\nmodulus2:", modulus2,
				"\nerror2:", error2)

	result, remainder, err := divAndRemainder(5, 2)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
	fmt.Println(result, remainder)

	result2, _, _ := divAndRemainder(40, 3)
	fmt.Println("result2:", result2)
}