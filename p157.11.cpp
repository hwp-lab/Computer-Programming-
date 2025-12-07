#include<stdio.h>
#define max 2147483647
void factorial(int n)
{
	long a=1;
	int i;
	static int j;
	for(i=1;i<=n;i++)
	{
		if(a>max/i)
		{
			printf("overflow\n");
			a=0;
			break;
		}
		a=a*i;
	}
	if(a!=0)
		printf("第%d次求阶乘的结果是%ld\n",j+++1,a);//j+++1=(j++)+1
}
int main()
{
	int m;
	while(1)
	{
		printf("input a number:");
		scanf("%d",&m);
		if(m>0)
			factorial(m);
		else
			break;
	}
	return 0;
}
