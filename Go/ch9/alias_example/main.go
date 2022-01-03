package main

import (
	"Go/ch9/alias_example/foo"
	"fmt"
)

func main() {
	f := foo.Foo{}
	fmt.Println(f)
	f2 := foo.MakeBar()
	fmt.Println(f2)
}
