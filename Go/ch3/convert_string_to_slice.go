package main

import "fmt"

func main() {
	var s string = "Hello, boi"
	var bs []byte = []byte(s)
	var rs []rune = []rune(s)
	fmt.Println("bs: ", bs)
	fmt.Println("rs: ", rs)
}