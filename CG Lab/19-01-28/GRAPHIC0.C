#include<conio.h>
#include<graphics.h>
void main(){
int gd =DETECT , gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
putpixel(75,25,WHITE);
line(50,50,100,50);
arc(100,250,0,150,50);
circle(100,400,50);
ellipse(300,100,0,360,50,100);
rectangle(300,220,350,300);
getch();
closegraph();
}
