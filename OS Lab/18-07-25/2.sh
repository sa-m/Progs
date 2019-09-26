#! /bin/bash

echo Enter a range :
read x y
for((i=$x;$i<$y;i++))
do
c=0
	for((j=2;$j<$i;j++))
	do
		if((($i%$j)==0))
		then
			c=$((c+1))
		fi
	done
	if(($c==0))
	then
		echo $i
	fi
done
