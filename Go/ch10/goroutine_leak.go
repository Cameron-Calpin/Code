package main

import "fmt"

func countTo(max int) <-chan int {
	ch := make(chan int)
	go func() {
		for i := 0; i < max; i++ {
			ch <- i
		}
		close(ch)
	}()
	return ch
}

func main() {
	// goes through
	for i := range countTo(10) {
		fmt.Println(i)
	}

	// exit loop to early, the goroutine blocks forever
	for i := range countTo(10) {
		if i > 5 {
			break
		}
		fmt.Println(i)
	}
}
