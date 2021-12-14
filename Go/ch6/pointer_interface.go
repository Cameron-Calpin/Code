package main

import (
	"encoding/json"
	"fmt"
)

func main() {
	f := struct {
		Name string `json:"name"`
		Age  int    `json:"age"`
	}{}
	err := json.Unmarshal([]byte(`{"name": "Bob", "age": 30}`), &f)

	fmt.Println(f, err)
}
