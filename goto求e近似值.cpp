#include<stdio.h>
int main()
{
	int n=1,i=1;
	float e=1,t;
	add:
	t=1.0/n;
	e=e+t;
	i++;
	n=n*i;
	if(n>1e-6) goto add;
	printf("e=%.4f",e);
	return 0;
}
