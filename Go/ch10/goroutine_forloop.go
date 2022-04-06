package main

import "fmt"

func main() {
	a := []int{2, 4, 6, 8, 10}
	ch := make(chan int, len(a))

	// This is a bug. This will assign the reused value of v in each iteration
	// for _, v := range a {
	// 	go func() {
	// 		ch <- v * 2
	// 	}()
	// }

	// Shadow the value within the loop
	// for _, v := range a {
	// 	v := v
	// 	go func() {
	// 		ch <- v * 2
	// 	}()
	// }

	// OR a more clean way and pass the value as a parameter to the goroutine
	for _, v := range a {
		go func(val int) {
			ch <- val * 2
		}(v)
	}

	for i := 0; i < len(a); i++ {
		fmt.Println(<-ch)
	}
}
