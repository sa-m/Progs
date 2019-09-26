#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
int x,y,x1,y1,x2,y2,dx,dy,pixel;
float xi,yi;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x1=20;y1=20;x2=20;y2=100;
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy)
pixel=dx;
else
pixel=dy;
xi= (float)dx/pixel;
yi=(float)dy/pixel;
x=x1;
y=y1;

for(i=1;i<=pixel;i++)
{
if(i%5 == 0)
putpixel(x,y,WHITE);
x=x+xi;
y=y+yi;
i=i+1;
delay(100);
}
getch();
closegraph();
return 0;
}