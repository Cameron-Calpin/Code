package main

import "fmt"

func main() {

	type person struct {
		name string
		age  int
		pet	 string
	}

	var fred person
	fmt.Println("fred.name:", fred.name)
	fmt.Println("fred.age:", fred.age)
	fmt.Println("fred.pet:", fred.pet)

	julia := person {
		"Julia",
		40,
		"cat",
	}
	fmt.Println("\njulia.name:", julia.name)
	fmt.Println("julia.age:", julia.age)
	fmt.Println("julia.pet", julia.pet)

	beth := person {
		age: 30,
		name: "Beth",
	}

	fmt.Println("\nBeth:", beth)

}