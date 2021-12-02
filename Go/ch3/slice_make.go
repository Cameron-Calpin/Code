package main

import "fmt"

func main() {
	x := make([]int, 5)
	fmt.Println("x: ", x, len(x), cap(x))

	y := make([]int, 5, 10) // specifying capacity of 10
	fmt.Println("y: ", y, len(y), cap(y))

	z := make([]int, 0, 10) // 0 length but 10 capacity
	z = append(z, 1, 2, 3, 4)
	// Now we can append values starting at 0. 
	fmt.Println("z: ", z, "\nz Length: ", len(z), "\nz Capacity", cap(z))

	var data []int 		// slice that might stay nil
	var data2 = []int{}	// zero-length slice, non-nil value


	data3 := []int{2, 4, 6, 8}	// declaring slice with default values
}