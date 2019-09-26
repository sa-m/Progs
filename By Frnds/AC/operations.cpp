#include<stdio.h>

int key()
{
	int a;
	printf("enter the key: ");
	scanf("%d",&a);
	return a;
}
void addition(int a,int b)
{
	int k=key();
	int i=a%k;
	int j=b%k;
	int c=(i+j)%k;
	printf("mod(%d + %d)=%d",a,b,c);
}

void subtraction(int a,int b)
{
	int k=key();
	int i=a%k;
	int j=b%k;
	int c=(i-j)%k;
	if(c<0)
		c=c+k;
	printf("mod(%d - %d)=%d",a,b,c);
}

void multiplication(int a,int b)
{
	int k=key();
	int i=a%k;
	int j=b%k;
	int c=(i*j)%k;
		printf("mod(%d * %d)=%d",a,b,c);
	
}

void addinv(int a)
{
	int k=key();
	int i=a%k;
	printf("additive inverse of %d is :%d",a,k-i);
}


void mli(int a)
{	
		int n=key();	
		int  r1=n,r2=a,t1=0,t2=1,q,r,t;
		q=r1/r2;
		r=r1%r2;
		while(r2>0)
		{
			q=r1/r2;
			r=r1%r2;
			r1=r2;
			r2=r;
			t=t1-q*t2;	t1=t2;	t2=t;	
		}
		if(r1==1)
			printf("Ans : %d",t1);
		else
			 printf("Inverse Doesn't Exist. ");
}

int main()
{
	int i,a,b;
	printf("enter :\n1.addition\n2.subtraction\n3.multiplication\n4.additive inverse\n5.multiplicative inverse\n");
	scanf("%d",&i);
	if(i<4)
	{
		printf("enter 2 numbers:");
		scanf("%d %d",&a,&b);
		switch(i)
		{
			case 1:addition(a,b);	break;
			case 2:subtraction(a,b);	break;
			case 3:multiplication(a,b);	break;
		    default:break;
		}	
	}
	
	else
	{
		printf("enter the number:");
		scanf("%d",&a);
		switch(i)
		{
			case 4:addinv(a);	break;
			case 5:mli(a);	break;
		    default:break;
		}	
	}

	return 0;
}
