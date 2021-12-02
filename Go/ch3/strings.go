package main

import "fmt"

func main() {
	var s string = "Hello there"
	var b byte = s[6]
	fmt.Println("b:", b)

	var s2 string = s[4:7]
	var s3 string = s[:5]
	var s4 string = s[6:]
	fmt.Println("\ns2: ", s2,
				"\ns3: ", s3,
				"\ns4: ", s4)

	// a single rune or byte can be converted to a string
	var a rune		= 'x'
	var h string	= string(a)
	var j byte		= 'y'
	var s5 string	= string(j)
	fmt.Println("\nh: ", h,
				"\ns5: ", s5)
}