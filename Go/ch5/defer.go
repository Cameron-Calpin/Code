package main

import "fmt"

func main() {
	defer fmt.Println("world") // deferred until main() exits
	fmt.Println("hello")
}