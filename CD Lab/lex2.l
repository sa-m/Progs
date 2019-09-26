%{
	#include<stdio.h>
	int p=0,n=0;
%}
%%
[-][0-9]+	{	n++;	}
[0-9]+	{	p++;	}
%%
int main()	{
	yylex();
	printf("Positive : %d Negative : %d",p,n);
	return 0;
}
