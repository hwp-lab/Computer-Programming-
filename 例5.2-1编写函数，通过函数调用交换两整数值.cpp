#include<stdio.h>
void reverse(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=3,b=5;
	int *x,*y;
	x=&a;
	y=&b;//把地址传过去的感觉
	printf("before:a=%d;b=%d\n",a,b);
	reverse(x,y);
	printf("after:a=%d;b=%d\n",a,b);
	return 0;
	
}
