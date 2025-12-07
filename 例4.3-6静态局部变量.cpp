#include<stdio.h>
void factorial(int n)
{
	long long a=1;
	int i;
	static int j;
	for(i=1;i<=n;i++)
		a=a*i;
	printf("第%d次求阶乘的结果是%lld\n",j+++1,a);//j+++1=(j++)+1
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
