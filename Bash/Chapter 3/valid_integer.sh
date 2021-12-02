#!/bin/bash
#: Description : Is this a valid integer

read integer
case $integer in
	*[0-9]*) false ;;
	*)	true ;;
esac