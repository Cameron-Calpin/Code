package main

import "fmt"

// introduce a variable a variable to hold the constant value
func stringp(s string) *string {
	return &s
}

func main() {

	type person struct {
		FirstName  string
		MiddleName *string
		LastName   string
	}

	p := person{
		FirstName:  "Pat",
		MiddleName: stringp("Perry"), // This Works
		LastName:   "Peterson",
	}

	fmt.Println("person p:", p)
}
