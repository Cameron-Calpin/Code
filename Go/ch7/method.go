package main

import "fmt"

type Person struct {
	FirstName string
	LastName  string
	Age       int
}

func (p Person) String() string {
	return fmt.Sprintf("%s %s, age %d", p.FirstName, p.LastName, p.Age)
}

func main() {
	person1 := Person{
		FirstName: "yeet",
		LastName:  "Johnson",
		Age:       69,
	}
	var result string = person1.String()
	fmt.Println(result)

}
