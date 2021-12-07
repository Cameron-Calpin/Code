package main

import "fmt"

func main() {
	intSet := map[int]bool{}
	// Cannot have duplicates in keys in a map. so length is 8
	vals := []int{5, 10, 2, 5, 8, 7, 3, 9, 1, 2, 10, 100}
	for _, v := range vals {
		intSet[v] = true
	}
	fmt.Println(len(vals), len(intSet))
	fmt.Println("inSet[5]: ", intSet[5])
	fmt.Println("inSet[100]:", intSet[500])
	if intSet[100] {
		fmt.Println("100 is in the set")
	}
}