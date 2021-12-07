package main

import "fmt"

func main() {

	type person struct {
		name string
		age  int
		pet	 string
	}

	person.name = "bob"
	person.age  = 50
	person.pet  = "dog"

	pet := struct {
		name string
		kind string
	}{
		name: "Fido",
		kind: "dog",
	}

}