package foo

import "Go/ch9/internal_example/foo/internal"

func UseDoubler(i int) int {
	return internal.Doubler(i)
}
