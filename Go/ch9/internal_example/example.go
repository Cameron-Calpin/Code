package internal_package_example

import "Go/ch9/internal_example/foo/internal"

func FailUseDoubler(a int) int {
	return internal.Doubler(a)
}