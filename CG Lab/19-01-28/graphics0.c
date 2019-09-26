#include<conio.h>
#include<graphics.h>
void main(){
int gd =DETECT , gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
putpixel(75,25,WHITE);
line(50,100,100,50);
arc(150,150,0,180,50+i);
circle(150,150,i);
ellipse(300,300,0,360,50,100);
rectangle(400,400,500,600);
getch();
closegraph();
}
