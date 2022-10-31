#!/bin/bash

ARGS=$@

if (($#==0))
	then echo At least one argument needed;
	exit 1
fi

for i in $ARGS
do 
if [ -d $i ]
	then ls $i;
elif [ -f "$i" ]
	then echo $i is a file;
else echo "$i is not valid";
     exit 1
fi
done
