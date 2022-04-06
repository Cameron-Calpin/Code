package main

import "fmt"

func main() {
	ch1 := make(chan int)
	ch2 := make(chan int)
	go func() {
		v := 1
		ch1 <- v
		v2 := <-ch2
		fmt.Println(v, v2)
	}()
	v := 2
	var v2 int
	// using select to check if any channel can proceed
	select {
	case ch2 <- v:
		fmt.Println("Wrote to ch2")
	case v2 = <-ch1:
		fmt.Println("v2 read from ch1")
	}
	fmt.Println(v, v2)
}
