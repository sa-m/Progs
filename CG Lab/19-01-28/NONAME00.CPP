#include <stdio.h>
#include <math.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd =DETECT , gm,i,j;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    /* Calculate square root of num */
    //root = sqrt(num);
    //center (200,200)
    double d;
    for(i=100;i<=300;i++)
    {
    for(j=200;j<=300;j++)
    {
    d=sqrt(((i-200)*(i-200)) +((j-200)*(j-200)));
    if(d<30)
    putpixel(i,j,4); 
    else if(d<70)
    putpixel(i,j,5); 
    else if
    putpixel(i,j,14); 
    else
    
    /* Print the resultant value */
}
    getch();
    return 0;
}
