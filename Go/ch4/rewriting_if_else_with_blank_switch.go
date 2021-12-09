package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	rand.Seed(time.Now().UTC().UnixNano())
	switch n := rand.Intn(10); {
	case n == 0:
		fmt.Println("That's too low")
	case n > 5:
		fmt.Println("That's too big:", n)
	default:
		fmt.Println("That's a good number:", n)
	}
}