#!/bin/bash
#: Description : Check if directory and go into said directory

read dir
if [ -d "$dir" ] && cd "$dir"
then
	echo "$PWD"
fi