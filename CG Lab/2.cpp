#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm,x,y,cx,cy,r,p;
	printf("Enter centre  : ");
	scanf("%d",&cx);
	scanf("%d",&cy);
	printf("Enter radius : ");
	scanf("%d",&r);
	
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(BLUE);
	
	x=r,y=0;
	putpixel(x+cx,y+cy,RED);
	if(r>0)
	{
		putpixel(x+cx,-y+cy,RED);
		putpixel(y+cx,x+cy,RED);
		putpixel(-y+cx,x+cy,RED);
	}
	
	for(p=1-r;x>y;)
	{
		y++;
		if(p<=0)	p+=2*y+1;
		else
		{
			x--;
			p+=2*y-2*x+1;
		}
		if(x<y)	break;
		
	}
	
