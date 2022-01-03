package sibling

import "Go/ch9/internal_example/foo/internal"

func AlsoUseDoubler(i int) int {
	return internal.Doubler(i)
}
