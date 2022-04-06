package main

import "fmt"

func processChannel(ch chan int) []int {
	const conc = 10
	results := make(chan int, conc)
	for i := 0; i < conc; i++ {
		go func() {
			v := <-ch
			fmt.Println(v)
			results <- process(v)
		}()
	}
	var out []int
	for i := 0; i < conc; i++ {
		out = append(out, <-results)
	}
	return out
}

func process(value int) int {
	return value * 4
}

func main() {
	const max = 10
	ch := make(chan int, max)
	for i := 0; i < max; i++ {
		ch <- i
	}
	result := processChannel(ch)
	fmt.Println(result)
	close(ch)
}
