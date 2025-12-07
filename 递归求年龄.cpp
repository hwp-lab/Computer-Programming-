#include<stdio.h>
int age(int,int);
int main()
{
	int n,a,ag;
	printf("输入学生数：");
	scanf("%d",&n);
	printf("第一个学生年龄：");
	scanf("%d",&a);
	ag=age(n,a);
	if(ag!=0)
		printf("age is %d",ag);
	return 0;
}
int age(int n,int a)
{
	if(n<=0)
	{
		printf("input error");
		return 0;
	}
	int ag;
	if(n==1)
		ag=a;
	else
		ag=age(n-1,a)+2;
	return ag;
}
