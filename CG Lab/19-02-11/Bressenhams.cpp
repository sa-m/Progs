#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm,x,y,x1,y1,x2,y2,dx,dy,p,s1,s2;
	printf("Enter 1st point coordinates  : ");
	scanf("%d",&x1);
	scanf("%d",&y1);
	printf("Enter last point coordinates : ");
	scanf("%d",&x2);
	scanf("%d",&y2);
	
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(BLUE);
	
	dx = x2-x1;	dy = y2-y1;	putpixel(x,y,RED);
	if((dy/dx)<1)
		for(x=x1,y=y1,p=2*dy-dx;x<=x2;x++)	//m<1
		{
			if(p>=0)
			{
				y++;
				p+=2*dy-2*dx;
			}
			else
				p+=2*dy;
			putpixel(x,y,RED);
		}
	else		
		for(x=x1,y=y1,p=2*dx-dy;y<=y2;)	//m>1
		{	
			s1 = (x2-x1)<0?-1:1;
			s2 = (y2-y1)<0?-1:1;
			if(p>=0)
			{
				y+=s2;
				x+=s1;
				p+=2*dx-2*dy;
			}
			else
			{
				y+=s2;
				p+=2*dx;
			}
			putpixel(x,y,RED);
		}	
	getch();
	closegraph();
	return 0;
}
