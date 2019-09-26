#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void shift(int a,int b)
{
	int i,j;
	for(i=0;i<1000;i++)
		for(j=0;j<1000;j++)
			if(getpixel(i,j)==4)
			{
				putpixel(i,j,0);
				putpixel(i+a,j+b,4);
			}
}

int main()
{
	int d=DETECT,m;
	initgraph(&d,&m,"c:\\turboc3\\bgi");
	setcolor(4);
	circle(150,150,100);
	shift(100,100);
	
	getch();
	closegraph();
	return 0;
}
