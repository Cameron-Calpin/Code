#!/bin/bash
#: Description : Provide three names

case $# in
	3) ;; ## We need 3 args, so do nothing
	*) printf "%s\n" "Please provide three names" >&2
	exit 1
	;;
esac