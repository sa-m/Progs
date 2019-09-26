%{
	#include<stdio.h>
	int var=0,opr=0,open=0,close=0;
%}
%%

([a-zA-Z][a-zA-Z|0-9]* | [0-9]+	)	{	if(var==opr)		var++;	}
[+|-|*|/]	{	if(var==opr+1)		opr++;	}
[(]	{	if(close<=open)		open++;}
[)]	{				close++;	}
[\n]	{	if(open==close && var==opr+1)	printf("Valid Exp\n");
					else	printf("Invalid Exp\n");	}
%%
int main()	{
	yylex();
	return 0;
}
