#include<stdio.h>
int triangle(int x,int y);
int main()
{
	int x,y;
	int r;
	printf("input line number and column number:");
	scanf("%d %d",&x,&y);
	if(x<y||x<1||y<1)
		printf("input error\n");
	else
	{
		r=triangle(x,y);
		printf("%d",r);
	}
	return 0;
}
int triangle(int x,int y)
{
	int a,b;
	if(y==1||y==x)
		return 1;
	else
	{
		a=triangle(x-1,y-1);
		b=triangle(x-1,y);//分清楚行和列
		return a+b;
	}
}

