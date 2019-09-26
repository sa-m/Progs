#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void boundfill(int x,int y,int bound,int newc)
{
	if(getpixel(x,y)!=bound && getpixel(x,y)!=newc)
	{

		putpixel(x,y,newc);
		boundfill(x+1,y,bound,newc);
		boundfill(x-1,y,bound,newc);
		boundfill(x,y+1,bound,newc);	
		boundfill(x,y-1,bound,newc);		
	}	
	else
		return;
	
}

int main()
{
	int d=DETECT,m;
	initgraph(&d,&m,"c:\\turboc3\\bgi");
	setcolor(4);
	circle(150,150,100);
	boundfill(200,200,4,8);
	getch();
	closegraph();
	return 0;
}
