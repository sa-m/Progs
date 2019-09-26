#! /bin/bash
echo Enter a Number :
read x
b=$x
c=0
while(($x > 0))
do
	c=$((c + 1))
	x=$((x / 10))
done
x=$b
while(($x > 0))
do
	d=$((x % 10))
	p=1
	for((i=1;$i<=$c;i++))
	do
		p=$((p*d))
	done
	s=$((s + p))
	x=$((x / 10))
done
if(($b == $s))
then
	echo ArmStrong
else
	echo Not ArmStrong
fi
