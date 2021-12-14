package main

import "fmt"

func main() {
	var i interface{}
	i = 20
	i = "hello"
	i = struct {
		FirstName string
		LastName  string
	}{"Fred", "Fredson"}
	fmt.Println("interface:", i)
}
