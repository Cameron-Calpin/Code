#!/bin/bash
#: Description : Prompt for a number and check that it is no greater than ten

printf "Enter a number no greater than 10: "
read number
if [ "$number" -gt 10 ]
then
	printf "%d is too big\n" "$number" >&2
	exit 1
else
	printf "You entered %d\n" "$number"
fi