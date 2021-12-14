package main

import (
	"fmt"
	"os"
)

func process(slice []byte) {
	fmt.Print("Data: -----------------------------------------------------\n")
	for i := range slice {
		// fmt.Print(i)
		fmt.Print(string(slice[i]))
	}
	fmt.Println()
}

// Buffer goes to 100.
func createBuffer(filename string) (err error) {
	file, err := os.Open(filename)
	if err != nil {
		return err
	}

	defer file.Close()

	data := make([]byte, 100)
	for {
		count, err := file.Read(data)
		if err != nil {
			return err
		}
		if count == 0 {
			return nil
		}
		process(data[:count])
	}
}

func main() {
	filename := "/home/cameron/Code/Go/ch3/slice_buffer.go"
	createBuffer(filename)
}
