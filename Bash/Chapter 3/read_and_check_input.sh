#!/bin/bash
#: Description : check whether the name was entered

echo "Enter name:"
read name
if [ -z "$name" ]
then
	echo "No name entered" >&2
	exit 1  ## Set a failed return code
fi