#include<stdio.h>
int GCD(int x,int y);//最大公约数
int LCM(int x,int y);//最小公倍数
int main()
{
	int a,b;
	printf("输入两个整数：");
	scanf("%d%d",&a,&b);
	printf("最大公约数：%d\n最小公倍数：%d\n",GCD(a,b),LCM(a,b));
	return 0;
}
int GCD(int x,int y)
{
	int t;
	if(x>y)
	{
		while((t=x%y)!=0)
		{
			x=y;
			y=t;
		}
		return y;
	}
	while((t=y%x)!=0)
	{
		y=x;
		x=t;
	}
	return x;
}
int LCM(int x,int y)
{
	return x*y/GCD(x,y);
}
