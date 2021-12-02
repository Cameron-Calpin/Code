package main

import "fmt"

func main() {
	 a := "hello" // Unicode U+FF41
	a := "goodbye" // standard lowercase a (Unicode U+0061), different from the line above
	fmt.Println( a )
	fmt.Println(a)
}