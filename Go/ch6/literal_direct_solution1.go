package main

import "fmt"

func main() {

	type person struct {
		FirstName  string
		MiddleName *string
		LastName   string
	}

	// introduce a variable to hold the constant value
	var tmp_mid_name string = "Perry"
	mid_name := &tmp_mid_name

	p := person{
		FirstName:  "Pat",
		MiddleName: mid_name, // This Works
		LastName:   "Peterson",
	}

	fmt.Println("person p:", p)
}
