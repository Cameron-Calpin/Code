#!/bin/bash
#: Description : Use $RANDOM to write the following output both to a file
#  and to a variable.

var="$(printf '%5d.%-5d\n' $RANDOM $RANDOM $RANDOM $RANDOM \
$RANDOM $RANDOM $RANDOM $RANDOM | tee RAND_NUM)"
echo $var