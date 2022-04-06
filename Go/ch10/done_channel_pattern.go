package main

import (
	"fmt"
	"time"
)

// multiples uses a done channel to shut down
func multiples(i int) (chan int, chan struct{}) {
	out := make(chan int)
	done := make(chan struct{})
	current := 0
	go func() {
		for {
			select {
			case out <- current * i:
				current++
			case <-done:
				fmt.Println("goroutine done")
				return
			}
		}
	}()
	return out, done
}

func main() {
	twosChan, done := multiples(2)
	for i := range twosChan {
		if i > 20 {
			break
		}
		fmt.Println(i)
	}
	close(done) // signals the goroutines to end

	time.Sleep(1 * time.Second) // simulate some work
}
