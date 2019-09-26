%{
	#include<stdio.h>
	#include<string.h>
int count=0,max=0;
char arr[20];
%}

%%
[{] {
	count++;
	if(max==count-1)
		max=count;
}

[}] {count--;}



%%

int main()
{
	yyin=fopen("ex.c","r");
	yylex();
	printf("\n%d\n",max);
	return 0;
}

