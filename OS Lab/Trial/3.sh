#! /bin/bash

read x y
c=$((x%2))
if(($c == 0))
then
	echo Even
else
	echo Odd
fi
