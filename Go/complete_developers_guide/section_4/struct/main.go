package main

import "fmt"

type contactInfo struct {
	email   string
	zipCode int
}

type person struct {
	firstName string
	lastName  string
	contactInfo
}

func main() {
	// alex := person{firstName: "Alex", lastName: "Anderson"}
	// fmt.Println(alex)

	// # zero value of type person
	// var alex person
	// fmt.Println(alex)
	// fmt.Printf("%+v\n", alex)

	// var alex person
	// alex.firstName = "Alex"
	// alex.lastName = "Anderson"
	// fmt.Println(alex)
	// fmt.Printf("%+v\n", alex)

	jim := person{
		firstName: "Jim",
		lastName:  "Party",
		contactInfo: contactInfo{
			email:   "jim@gmail.com",
			zipCode: 94000,
		},
	}

	// jimPointer := &jim
	// jimPointer.updateName("jimmy")

	jim.updateName("jimmy")
	jim.print()
}

// func (pointerToPerson *person) updateName(newFirstName string) {
// 	(*pointerToPerson).firstName = newFirstName
// }

func (pointerToPerson *person) updateName(newFirstName string) {
	pointerToPerson.firstName = newFirstName
}

func (p person) print() {
	fmt.Printf("%v+v\n", p)
}
