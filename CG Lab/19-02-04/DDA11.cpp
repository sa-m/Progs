#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	printf("Enter the value of x1");
	scanf("%f",&x1);
	printf("Enter the value of y1");
	scanf("%f",&y1);
	printf("Enter the value of x2");
	scanf("%f",&x2);
	printf("Enter the value of y2");
	scanf("%f",&y2);
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
		step=dx;
	else
		step=dy;
	
	dy=dx/step;
	dy=dy/step;
	for(i=0;i<step;i++,x1+=dx,y1+=dy)
	{
		putpixel(x1,y1,5);
		delay(100);
	}
	
	getch();
	closegraph();
	return 0;
}
