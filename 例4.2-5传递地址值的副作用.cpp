#include<stdio.h>
void swap(int b[])
{
	int t;
	t=b[0];
	b[0]=b[1];
	b[1]=t;
	printf("in swap() b:%d %d\n",b[0],b[1]);
}
int main()
{
	int a=1,b=2;
	printf("before call swap:a=%d b=%d\n",a,b);
	swap(&a);
	printf("after call swap:a=%d b=%d",a,b);
	return 0;
}
