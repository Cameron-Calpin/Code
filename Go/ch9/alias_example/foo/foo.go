package foo

import "fmt"

type Foo struct {
	x int
	S string
}

func (f Foo) Hello() string {
	return "hello"
}

func (f Foo) goodbye() string {
	return "goodbye"
}

type Bar = Foo

func MakeBar() Bar {
	bar := Bar{
		x: 20,
		S: "Hello",
	}
	var f Foo = bar
	fmt.Println(f.Hello())
	fmt.Println(f.goodbye())
	return bar
}
