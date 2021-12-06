package main

import "fmt"

func main() {
	m := map[string]int{
		"hello": 5,
		"world": 0,
	}

	delete(m, "hello")
	fmt.Println("map m:", m)
}