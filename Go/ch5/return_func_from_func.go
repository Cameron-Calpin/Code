package main

import "fmt"

func makeMult(base int) func(int) int {
	return func(factor int) int {
		fmt.Println("base:", base, "\nfactor:", factor)
		return base * factor
	}
}

func main() {
	twoBase := makeMult(2)
	threeBase := makeMult(3)
	for i := 0; i < 5; i++ {
		fmt.Println(twoBase(i), threeBase(i))
	}
}