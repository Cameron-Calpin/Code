package main

import (
	"fmt"
	"sort"
)

func main() {

	type Person struct {
		FirstName string
		LastName  string
		age	      int
	}

	people := []Person{
		{"Pat", "Patterson", 37},
		{"Tracy", "Bobbert", 23},
		{"Fred", "Fredson", 18},
	}
	fmt.Println(people)

	// sort by last name
	sort.Slice(people, func(i int, j int) bool {
		fmt.Println(i, j)
		return people[i].LastName < people[j].LastName
	})
	fmt.Println(people)

	// sort by age
	sort.Slice(people, func(i int, j int) bool {
		return people[i].age < people[j].age
	})
	fmt.Println(people)

}