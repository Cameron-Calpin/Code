package main

import "fmt"

func main() {
	intSet := map[int]struct{}{}
	vals := []int{5, 10, 2, 5, 8, 7, 3, 9, 1, 2, 10}
	for _, v := range vals {
		intSet[v] = struct{}{}
	}
	fmt.Println("intSet[100]:", intSet[100])

	if x, ok := intSet[5]; ok {
		fmt.Println("x: ", x)
		fmt.Println("ok: ", ok)
		fmt.Println("5 is in the set")
	}
}