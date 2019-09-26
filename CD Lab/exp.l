%{
	#include<stdio.h>
int o=0,c=0;
%}

%%

([0-9]*["+"|"*"|"-"|"/"])*[0-9]* {
				printf("valid");
}

%%

int main()
{
	yylex();
	return 0;
}

