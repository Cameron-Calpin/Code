package main

import (
	"Go/ch9/package_example/formatter"
	"Go/ch9/package_example/math"
	"fmt"
)

func main() {
	num := math.Double(2)
	output := print.Format(num)
	fmt.Println(output)
}
