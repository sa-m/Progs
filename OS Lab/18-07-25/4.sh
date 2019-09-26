#! /bin/bash
echo Enter a Number :
read x
r=0
while(($x > 0))
do
	d=$((x % 10))
	if(($r > 0))
	then
		if(($d == 0))
		then
			echo zero
		fi
	fi
	r=$((r * 10 + d))
	x=$((x / 10))
done
x=$r
while(($x > 0))
do
	d=$((x % 10))
	x=$((x / 10))
	case $d in
	1)
		echo one
		;;
	2)
		echo two
		;;
	3)
		echo three
		;;
	4)
		echo four
		;;
	5)
		echo five
		;;
	6)
		echo six
		;;
	7)
		echo seven
		;;
	8)
		echo eight
		;;
	9)
		echo nine
		;;
	0)
		echo zero
		;;
	esac
done

