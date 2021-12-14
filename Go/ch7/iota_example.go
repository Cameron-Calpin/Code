package main

import "fmt"

type MailCategory int
type BitField int

const (
	Uncategorized MailCategory = iota
	Personal
	Spam
	Social
	Advertisements
)

const (
	Field1 BitField = 1 << iota // assigned 1
	Field2                      // assigned 2
	Field3                      // assigned 4
	Field4                      // assigned 8
)

func main() {
	fmt.Println(Uncategorized, Personal, Spam, Social, Advertisements)
	fmt.Println(Field1, Field2, Field3, Field4)
}
