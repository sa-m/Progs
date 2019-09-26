#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void size(float a,float b)
{
	int i,j;
	for(i=0;i<210;i++)
		for(j=0;j<210;j++)
			if(getpixel(i,j)!=0)
			{
				putpixel(i,j,0);
				putpixel(i*a,j*b,4);
			}
}

int main()
{
	int d=DETECT,m;
	initgraph(&d,&m,"c:\\turboc3\\bgi");
	setcolor(4);
	circle(150,150,50);
	size(5,5);
	
	getch();
	closegraph();
	return 0;
}
