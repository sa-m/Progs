#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void rotate(double a)
{
	int i,j,m,n;
	double x=cos(a);
	double y=sin(a);
	
	for(i=0;i<210;i++)
		for(j=0;j<210;j++)
			if(getpixel(i,j)!=0)
			{
				putpixel(i,j,0);
					m=round((double)i*x-(double)j*y);
					n=round((double)i*y+(double)j*x);
				putpixel(m,n,4);
			}
}

int main()
{
	int d=DETECT,m;
	initgraph(&d,&m,"c:\\turboc3\\bgi");
	setcolor(4);
	circle(150,150,50);
	rotate(30);
	
	getch();
	closegraph();
	return 0;
}
