#include<stdio.h>
void main()
{
	int x1,x2,y1,y2;
	flot dist;
	printf("enter the co-ordinate of point 1-");
	scanf("%d%d",&x1,&y1);
	printf("enter the co-ordinate of point 2-");
	scanf("%d%d",&x2,&y2);
	dist=sqrt(pow(x1-x2),2)+(pow(y1-y2),2);
	printf("the distance between two points is %f",dist);
}
