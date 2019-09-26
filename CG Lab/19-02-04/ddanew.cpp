#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int	round1(double n)
{
	return	n<0?	n-0.5:n+0.5;
}
void dda(int x1, int y1, int x2, int y2)
{
	int i,tempx = (x1-x2), tempy = (y1-y2);
	int steps = 0;
	if(tempx >= tempy)	steps = tempx;
	else	steps = tempy;
	float xinc = (tempx/steps), yinc = (tempy/steps);
	float x = float(x1), y = float(y1);
	for(i = 1; i<= steps;i++)
	{
		printf("%f\t\t%f",round1(x+xinc), round1(y+yinc));
	}
}
int main()
{
	int x1 = 100, y1 =300, x2 = 100, y2 = 500;
	dda(x1,y1,x2,y2);
	return 0;
}
