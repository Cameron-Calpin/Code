package main

import "fmt"

func process(val int) int {
	fmt.Println(val)
	return val + val
}

func runThingConcurrently(in <-chan int, out chan<- int) {
	go func() {
		for val := range in {
			result := process(val)
			out <- result
		}
	}()
}

func main() {
	ch1 := make(chan int, 5)
	ch2 := make(chan int)
	runThingConcurrently(ch1, ch2)
	fmt.Println(ch1)
	fmt.Println(ch2)
}
