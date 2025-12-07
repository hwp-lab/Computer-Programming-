#include<stdio.h>
int main()
{
	for(;;)
	{
	int i,n,a=1;
	long b=1;
	long long c=1;
	double d=1;
	printf("n=");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		{
		a=a*i;
		b=b*i;
		c=c*i;
		d=d*i;
		printf("%-2d!=20%d %20ld %20lld %20.0f\n",i,a,b,c,d);
		}
	}
	return 0;
}
