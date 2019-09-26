#include <stdio.h>
#include <math.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd =DETECT , gm,i,j;
    double d;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    /* Calculate square root of num */
    //root = sqrt(num);
    //center (200,200)
    for(i=100;i<=300;i++)
    {
    for(j=100;j<=300;j++)
    {
    d=sqrt(((i-200)*(i-200)) +((j-200)*(j-200)));
    if(d<50)
    putpixel(i,j,13);
    else if (d<100)
    putpixel(i,j,14);
    /* Print the resultant value */
    }
    }
    getch();
    return 0;
}
