#!/bin/bash

listing=`ls /dev`

for i in $listing;
do
	echo $i | grep [^0-9][0-9]$
done
