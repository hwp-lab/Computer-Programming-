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
	int a[2]={1,2};
	printf("before call swap a:%d %d\n",a[0],a[1]);
	swap(a);
	printf("after call swap a:%d %d",a[0],a[1]);
	return 0;
}
