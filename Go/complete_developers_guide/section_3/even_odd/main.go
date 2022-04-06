package main

import "fmt"

func main() {
	some_slice := []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	even := "even"
	odd := "odd"

	for i := range some_slice {
		if i%2 == 0 {
			fmt.Printf("%v is %v\n", rune(i), even)
		} else {
			fmt.Printf("%v is %v\n", rune(i), odd)
		}
	}
}
