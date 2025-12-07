#include<stdio.h>
int main()
{
int sign=1;
double term,sum=1.0,deno=2.0;
int i;
for(i=0;i<99;i++)
	{
	sign=-sign;
	term=sign/deno;
	sum=sum+term;
	deno=deno+1;
	}
printf("sum is %f\n",sum);
return 0;
}

