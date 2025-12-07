#include<stdio.h>
int main()
{
	int a,b,t;
	for(;;)
	{
	printf("请输入两个数a,b(a>b):");
	scanf("%d%d",&a,&b);
	t=a%b;
	while(t!=0)
		{
		a=b;
		b=t;
		t=a%b;//没有这行的话t值不变。。。
		}
	printf("最大公约数是%d\n",b);
	}
	return 0;
}
