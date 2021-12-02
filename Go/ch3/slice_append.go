package main

import "fmt"

func main() {
	var x []int
	x = append(x, 10)
	fmt.Println("slice x: ", x)

	// append to slice that already has elements
	var y = []int{1, 2, 3, 4}
	y = append(y, 20, 30, 40)
	fmt.Println("slice y: ", y)
}