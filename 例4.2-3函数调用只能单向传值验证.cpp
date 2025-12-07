#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("in swap():a=%d b=%d\n",a,b);
}
int main()
{
	int a=1,b=2;
	printf("before call swap:a=%d b=%d\n",a,b);
	swap(a,b);
	printf("after call swap:a=%d b=%d",a,b);
	return 0;
}
