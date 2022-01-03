package main

import "fmt"

type Status int

const (
	InvalidLogin Status = iota + 1
	NotFound
)

type StatusErr struct {
	Status  Status
	Message string
	err     error
}

func (se StatusErr) Error() string {
	return se.Message
}

func (se StatusErr) Unwrap() error {
	return se.err
}

func GenerateError_Wrong(flag bool) error {
	var genErr StatusErr
	if flag {
		genErr = StatusErr{
			Status: NotFound,
		}
	}
	return genErr
}

// Two ways to fix this:
// 1. explicitly return nil for the error value when a function completes successfully
// 2. any local variable that holds an error is of type error
func GenerateError_Right1(flag bool) error {
	if flag {
		return StatusErr{
			Status: NotFound,
		}
	}
	return nil
}

func GenerateError_Right2(flag bool) error {
	var genErr error
	if flag {
		genErr = StatusErr{
			Status: NotFound,
		}
		fmt.Println()
	}
	return genErr
}

func main() {
	fmt.Println("InvalidLogin:", InvalidLogin)
	fmt.Println("NotFound:", NotFound)

	err := GenerateError_Wrong(true)
	fmt.Println("GenerateError_Wrong: ", err != nil)
	err = GenerateError_Wrong(false)
	fmt.Println("GenerateError_Wrong: ", err != nil)

	err1 := GenerateError_Right1(true)
	fmt.Println("GenerateError_Right1: ", err1 != nil)
	err1 = GenerateError_Right1(false)
	fmt.Println("GenerateError_Right1: ", err1 != nil)

	err2 := GenerateError_Right2(true)
	fmt.Println("GenerateError_Right2: ", err2 != nil)
	err2 = GenerateError_Right2(false)
	fmt.Println("GenerateError_Right2: ", err2 != nil)

	genErr := StatusErr{
		Status:  NotFound,
		Message: "yeet",
	}
	fmt.Println("genErr.Error():", genErr.Error())
	fmt.Println("genErr.Unwrap():", genErr.Unwrap())
}
