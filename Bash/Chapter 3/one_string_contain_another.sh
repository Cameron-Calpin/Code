#!/bin/bash
#: Description : Checks if one string contains another

one="yah yeet"
two="yeet"

case $one in
	*"$two"*) true ;;
	*) false ;;
esac