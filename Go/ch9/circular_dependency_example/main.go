package main

import (
	"Go/ch9/circular_dependency_example/person"
	"fmt"
)

func main() {
	bob := person.Person{PetName: "Fluffy"}
	fmt.Println(bob.Pet())
}
