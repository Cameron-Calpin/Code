package main

import "fmt"

func main() {
	slice := []string{"one", "two", "thre"}
	var x = [12]int{1, 5: 4, 6, 10: 100, 15}
	var t = [...]int{10, 20, 30}
	var y = [3]int{1, 2, 3}

	fmt.Println(slice)
	fmt.Println(x)
	fmt.Println(t == y)

}