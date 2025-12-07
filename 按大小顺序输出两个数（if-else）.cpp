#include<stdio.h>
int main()
{
	int a,b,t;
	printf("输入两个整数；");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("%d,%d",a,b);
	return 0;
}
