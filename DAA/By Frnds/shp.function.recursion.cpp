 //program add n numbers using function recursion
#include<stdio.h>
#include<conio.h>
int add(int n);
int main()
{
	int num,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	printf("sum=%d",add(num));
	return(0);
	

}
int add(int n)
{
	if (n!=0)
	{
		return n+add(n-1);
	
	}
	else
	return n;
}
