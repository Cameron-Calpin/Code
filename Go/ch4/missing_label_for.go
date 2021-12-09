package main

import "fmt"

func main() {

	// We want to break out of for loop, but breaks
	// out of switch statment instead
	for i := 0; i < 10; i++ {
		switch {
		case i%2 == 0:
			fmt.Println(i, "is even")
		case i%3 == 0:
			fmt.Println(i, "is divisible by 3 but not 2")
		case i%7 == 0:
			fmt.Println("exit the loop!")
			break
		default:
			fmt.Println(i, "is boring")
		}
	}

	fmt.Println()

	// Need to create a label for the loop
	loop:
		for i := 0; i < 10; i++ {
			switch {
			case i%2 == 0:
				fmt.Println(i, "is even")
			case i%3 == 0:
				fmt.Println(i, "is divisible by 3 but not 2")
			case i%7 == 0:
				fmt.Println("exit the loop!")
				break loop
			default:
				fmt.Println(i, "is boring")
			}
		}
}