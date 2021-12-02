package main

import "fmt"

func main() {
	x := []int{1, 2, 3, 4}
	y := make([]int, 4)
	num := copy(y, x)
	fmt.Println(y, num)

	// copy four-element slice into a two-element slice
	a := []int{1, 2, 3, 4}
	b := make([]int, 2)
	copy(b, a[2:])
	fmt.Println(a)
	fmt.Println(b)

	// copy between two slices that cover overlapping sections
	// of an underlying slice
	g := []int{1, 2, 3, 4}
	fmt.Println("g[:3] ", g[:3])
	fmt.Println("g[1:] ", g[1:])
	num2 := copy(g[:3], g[1:])
	fmt.Println(g, num2)
}