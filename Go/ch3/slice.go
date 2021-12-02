package main

import "fmt"

func main() {
	var x = []int{10, 20, 30} // slices don't specify size
							  // Using [...] makes an array, [] makes a slice
	var y [][]int

	// y[0][0] := 1
	fmt.Println(y)
	fmt.Println(x)

	var b []int

	fmt.Println(b)
}