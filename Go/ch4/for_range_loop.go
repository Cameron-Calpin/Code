package main

import "fmt"

func main() {

	evenVals := []int{2, 4, 6, 8, 10, 12}
	for i, v := range evenVals {
		fmt.Println(i, v)
	}

	// ignoring key
	for _, v := range evenVals {
		fmt.Println(v)
	}

	// leaving out values. valid go code, don't use this
	uniqueNames := map[string]bool{"Fred": true, "Raul": true, "Wilma": true}
	for k := range uniqueNames {
		fmt.Println(k)
	}
}