%{
	#include<stdio.h>
%}
%%
[ ]{5,8} { printf("#");	}
[ ]{1,4} { printf("*");	}
. { printf("%s",yytext); }
%%
int main()	{
	yylex();
	return 0;
}
