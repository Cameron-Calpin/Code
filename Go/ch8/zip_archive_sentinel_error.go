package main

import (
	"archive/zip"
	"bytes"
	"fmt"
)

func main() {
	data := []byte("This is not a zip file")
	notAZipFile := bytes.NewReader(data)
	_, err := zip.NewReader(notAZipFile,
		int64(len(data)))
	fmt.Println("err:", err)
	fmt.Println("zip.ErrFormat:", zip.ErrFormat)
	if err == zip.ErrFormat {
		fmt.Println("Told you so")
	}
}
