#include<stdio.h>
int addx(int,int);
int main()
{
	int a[900];
	int i,j=0;
	int x;
	printf("x=");
	scanf("%d",&x);
	for(i=100;i<1000;i++)
		if(addx(i,x)==1)
		{
			a[j]=i;
			j++;
		}
	for(i=0;i<j;i++)
	{
		printf("%d,",a[i]);
		if(i%5==4)
			printf("\n");
	}
	printf("\n");
	printf("符合各位上数字之和为%d的整数个数：%d",x,j);
	return 0;
}
int addx(int n,int x)
{
	int a,b,c;
	a=n%10;
	b=(n/10)%10;
	c=n/100;
	if(a+b+c==x)
		return 1;
	return 0;
}
