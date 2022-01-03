package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
)

func readJsonFile() (map[string]interface{}, error) {
	// one set of braces for the interface{} type,
	// the other to instantiate an instance of the map
	data := map[string]interface{}{}
	content, err := ioutil.ReadFile("testdata/sample.json")
	if err != nil {
		return nil, err
	}
	json.Unmarshal(content, &data)
	// the contents are now in the data map
	return data, nil
}

func main() {
	data, err := readJsonFile()
	fmt.Println(data, err)
}
