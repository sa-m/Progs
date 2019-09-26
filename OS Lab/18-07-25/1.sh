#! /bin/bash
echo Enter a Number :
read x
s=0
while(($x > 0))
do
	d=$((x % 10))
	s=$((s + d))
	x=$((x / 10))
done
echo Sum of Digits = $s
