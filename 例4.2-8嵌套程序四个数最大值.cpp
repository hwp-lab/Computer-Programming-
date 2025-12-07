#include<stdio.h>
int max1(int a,int b,int c,int d);
int max2(int a,int b);
int main()
{
	int a,b,c,d;
	printf("input four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("max is%d",max1(a,b,c,d));
	return 0;
}
int max1(int a,int b,int c,int d)
{
	int t;
	t=max2(a,b);
	t=max2(t,c);
	t=max2(t,c);
	return t;
}
int max2(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

