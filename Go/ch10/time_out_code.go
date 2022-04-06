package main

import (
	"errors"
	"fmt"
	"math/rand"
	"time"
)

func timeLimit() (int, error) {
	var result int
	var err error
	done := make(chan struct{})
	go func() {
		result, err = doSomeWork()
		close(done)
	}()
	select {
	case <-done:
		return result, err
	case <-time.After(2 * time.Second):
		return 0, errors.New("work timed out")
	}
}

func doSomeWork() (int, error) {
	// Change sleep value lower to avoid work timed out
	time.Sleep(3 * time.Second)
	fmt.Println("Did some work...")
	return rand.Intn(100), nil
}

func main() {
	result1, err1 := timeLimit()
	result2, err2 := timeLimit()
	result3, err3 := timeLimit()
	fmt.Println(result1, err1)
	fmt.Println(result2, err2)
	fmt.Println(result3, err3)
}
