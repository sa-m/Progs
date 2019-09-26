#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void ffill(int x,int y,int oldc,int newc)
{
	if(getpixel(x,y)==oldc)
	{
		putpixel(x,y,newc);
		ffill(x+1,y,oldc,newc);
		ffill(x-1,y,oldc,newc);
		ffill(x,y+1,oldc,newc);	
		ffill(x,y-1,oldc,newc);		
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
	int oldc=getpixel(200,200);
	ffill(200,200,oldc,8);
	getch();
	closegraph();
	return 0;
}
