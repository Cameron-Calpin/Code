package main

import "fmt"

func main() {
	// zero value for map is nil. nil map has a length of 0.
	// attempting to write to a nil map variable causes a panic.
	var nilMap map[string]int
	fmt.Println("nilMap: ", nilMap)

	// same as nil map, has a length of 0 but you can read and
	// write to a map assigned an empty map literal. 
	totalWins := map[string]int{}
	totalWins["Yeet"] = 5
	fmt.Println("totalWins: ", totalWins)

	teams := map[string][]string {
		"Orcas": []string{"Fred", "Ralph", "Bijou"},
		"Lions": []string{"Sarah", "Peter", "Billie"},
		"Kittens": []string{"Waldo", "Raul", "Ze"},
	}
	fmt.Println("teams: ", teams)

	// create map with capacity of 10
	ages := make(map[int][]string, 10)
	fmt.Println("ages: ", ages)
}