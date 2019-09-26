%{
	#include<stdio.h>
%}
%%
.*['/*'].*[\n]*.*[^'*/'].*[\n]*.*['*/']	{	}
.*[/][/].*[\n]	{	}
%%
int main()	{
	yyin = fopen("test1.c", "r");
	yyout = fopen("test2.c", "w");
	yylex();
	return 0;
}
