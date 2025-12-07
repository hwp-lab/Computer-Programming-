#include<stdio.h>
int main()
{
	int a,b,i;
	a=1;
	printf(" 1-1\n");
	b=1;
	printf(" 1-1\n");
	for(i=1;i<=19;i++)
	{
		a=a+b;
		printf("%2d-%d\n",2*i+1,a);
		b=a+b;
		printf("%2d-%d\n",2*i+2,b);
	}
	return 0;
}
