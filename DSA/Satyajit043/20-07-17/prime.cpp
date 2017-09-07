#include<stdio.h>
#include<math.h>
int main()
{
	int b,n,i,c=1;
	printf("Enter no.\n");
	scanf("%d",&n);
	n = abs(n);
	if(n==2)
		printf("Prime. Found in 0 Divisions");
	else if(n%2==0 || sqrt(n)==int(sqrt(n)))
		printf("Not Prime. Found in %d Divisions",c);
	else
	{	b = int(sqrt(n));
		for(i=3;i<=b;i+=2)
		{	c++;
			if(n%i==0)
			{	printf("Not Prime. Found in %d Divisions",c);
				return 0;
			}
		}printf("Prime. Found in %d Divisions",c);
		 return 0;
	}return 0;
}
