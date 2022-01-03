package main

import (
	"fmt"
	"os"
	"reflect"
)

type MyErr struct {
	Codes []int
}

func (me MyErr) Error() string {
	return fmt.Sprintf("codes: %v", me.Codes)
}

func (me MyErr) Is(target error) bool {
	if me2, ok := target.(MyErr); ok {
		return reflect.DeepEqual(me, me2)
	}
	return false
}

func fileChecker(name string) error {
	f, err := os.Open(name)
	if err != nil {
		return fmt.Errorf("in fileChecker: %w", err)
	}
	f.Close()
	return nil
}

func main() {
	Me := MyErr{}
	err := fileChecker("not_here.txt")
	for i := 0; i < 5; i++ {
		Me.Codes = append(Me.Codes, i)
	}
	fmt.Println("Error(): ", Me.Error())
	fmt.Println("Is(): ", Me.Is(err))
}
