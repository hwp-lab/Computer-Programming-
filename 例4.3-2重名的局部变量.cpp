#include<stdio.h>
int a1(int a)
{
	a=7;
	printf("函数a1中的a=%d\n",a);
	return a;
}
int main()
{
	int a;
	a=3;
	printf("main头部的a=%d\n",a);
	if(a==3)
	{
		int a=9;
		printf("if{}中的a=%d\n",a);
	}
	a=a1(a);
	printf("if{}后的a=%d\n",a);
	{
		int a=2;
		printf("单独{}中的a=%d\n",a);
	}
	return 0;
}
