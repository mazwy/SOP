#!/bin/bash

echo Input a number:

read number

if [ "$number" -eq  "0" ]
then
	echo "No arguments supplied"
else
	echo $number
fi
