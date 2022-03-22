package main

import (
	"io"
	"log"
	"os"
)

func main() {

	file, err := os.Open(os.Args[1])

	if err != nil {
		log.Fatal(err)
		os.Exit(1)
	}

	// fmt.Printf("Contents of file: %+v\n", file)

	io.Copy(os.Stdout, file)
}
