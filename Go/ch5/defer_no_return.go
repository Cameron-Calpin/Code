package main

import "fmt"

func example() {
	defer func() int {
		return 2 // there's no way to return this value
	}()
}

func main() {
	result = example()
	fmt.Println(result)
}