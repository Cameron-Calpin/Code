package main

import (
	"fmt"
	"sync"
)

func processAndGather(in <-chan int, processor func(int) int, num int) []int {
	out := make(chan int, num)
	var wg sync.WaitGroup
	wg.Add(num)
	for i := 0; i < num; i++ {
		go func() {
			defer wg.Done()
			for v := range in {
				fmt.Println("value: ", v)
				out <- processor(v)
			}
		}()
	}
	go func() {
		wg.Wait()
		close(out)
	}()
	var result []int
	for v := range out {
		result = append(result, v)
	}
	return result
}

func processHelper(num int) int {
	return num * 2
}

func main() {
	const max = 10
	ch1 := make(chan int, max)
	go func() {
		for i := 0; i < max; i++ {
			ch1 <- i
		}
	}()
	result := processAndGather(ch1, processHelper, 3)
	fmt.Println("Result: ", result)
}
