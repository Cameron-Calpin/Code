package main

import "fmt"

type Foo struct {
	Field1 string
	Field2 int
}

// Don't do this
func MakeFoo1(f *Foo) error {
	f.Field1 = "val"
	f.Field2 = 20
	return nil
}

// Do this
func MakeFoo2() (Foo, error) {
	f := Foo{
		Field1: "val",
		Field2: 20,
	}
	return f, nil
}

func main() {
	Foo1 := Foo{
		Field1: "other val",
		Field2: 30,
	}
	MakeFoo1(&Foo1)
	Foo2, err := MakeFoo2()

	fmt.Println(Foo1)
	fmt.Println(Foo2, err)

}
