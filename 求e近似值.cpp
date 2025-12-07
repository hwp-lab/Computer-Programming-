#include<stdio.h>
int main()
{
	int n=1,i;
	float e=1;
	for(i=1;1.0/n>=1e-6;i++)
	{
		n=n*i;
		e=e+1.0/n;
	}
	printf("e=%f",e);
	return 0;
}
