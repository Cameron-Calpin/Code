package main

import (
	"fmt"
)

func main() {
	greeting := "Hi There!"

	c := make(chan string)

	go (func() {
		c <- greeting
		fmt.Println(greeting)
	})()

	fmt.Println(<-c)
}
