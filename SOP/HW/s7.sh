#!/bin/bash

if [ -d $1 ]
then
	ls -f;
	ls -f | wc -l;
	ls -d | wc -l;
	ls -f | wc -l;
fi

