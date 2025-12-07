#include<stdio.h>
int main() 
{
	int a, b, t;
	for (;;) 
	{
		printf("请输入两个数a,b:");
		scanf("%d%d", &a, &b);
		while (a<=0) 
		{
			printf("再输入a:");
			scanf("%d", &a);
		}
		while (b<=0) 
			{
			printf("再输入b:");
			scanf("%d", &b);
			}
		while (t=a % b)
		{
			a = b;
			b = t;
		}
		printf("最大公约数是%d\n", b);
	}
		return 0;
}
