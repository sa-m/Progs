#! /bin/bash
echo -n "Enter String : "
read x
i=0
echo x[$i]
while((x[$i] -ne "0"))
do
	i=$((i+1))
done
echo Length of String = $i
