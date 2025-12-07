#include<stdio.h>
struct k
{
	int a;
	int b;
};
struct k reduction(int a,int b);
int main()
{
	struct k l;
	printf("请输入分子、分母：");
	scanf("%d %d",&l.a,&l.b);
	while(l.a<=0)
	{
		printf("再次输入分子：");
		scanf("%d",&l.a);
	}
	while(l.b<=0)
	{
		printf("再次输入分母：");
		scanf("%d",&l.b);
	}
	l=reduction(l.a,l.b);
	if(l.a==0)
		return 0;
	printf("%d/%d",l.a,l.b);
	return 0;
}
struct k reduction(int a,int b)
{
	int t;
	struct k result;
	result.a=a;
	result.b=b;
	if(a>b)
	{
		while((t=a%b)!=0)
		{
			a=b;
			b=t;
		}
		if(a==1)
		{
			printf("%d/%d是最简分数",result.a,result.b);
			result.a=result.b=0;
		}
		result.a/=b;
		result.b/=b;
	}
	else
	{
		while((t=b%a)!=0)
		{
			b=a;
			a=t;
		}
		if(a==1)
		{
			printf("%d/%d是最简分数",result.a,result.b);
			result.a=result.b=0;
		}
		result.a/=a;
		result.b/=a;
	}
	return result;
}
