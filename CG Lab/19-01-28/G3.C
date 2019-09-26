#include <stdio.h>
#include <math.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd =DETECT , gm,i,j;
    double d1,d2;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    /* Calculate square root of num */
    //root = sqrt(num);
    //center (200,200)

    for(i=100;i<=300;i++)
    {
    for(j=100;j<=300;j++)
    {
    d1=sqrt(((i-200)*(i-200)) + ((j-200)*(j-200)));
    d2=sqrt(((i-300)*(i-300)) + ((j-200)*(j-200)));
    if(d1<=100 && d2<=100)
    putpixel(i,j,4);
    else if(d1<=100)
    putpixel(i,j,5);
    else if (d2<=100)
    putpixel(i,j,14);
    /* Print the resultant value */
}
}
    getch();
    return 0;
}
