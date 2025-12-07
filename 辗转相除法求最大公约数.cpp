/*辗转相除法原理：两个整数的最大公约数等于其中较小的数和两数相除的余数的最大公约数;直到余数为0，最后的非零余数即最大公约数*/
#include<stdio.h>
int main()
{
	int a,b,t;
	for(;;)
	{
	printf("请输入两个数a,b:");
	scanf("%d%d",&a,&b);
	if((a!=0)&&(b!=0))
	{
	while(t=a%b)
		{
		a=b;
		b=t;
		}
	printf("最大公约数是%d\n",b);
	}
	else {printf("Error");break;}
	}
	return 0;
}
