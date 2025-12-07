#include<stdio.h>
void swap(int b[])
{
	int t;
	t=b[0];
	b[0]=b[1];
	b[1]=t;
	printf("in swap() b:%d %d\n",b[0],b[1]);
	printf("the location of b:%p\n",b);
}
int main()
{
	int a=1,b=2;
	printf("before call swap:a=%d b=%d\n",a,b);
	printf("the location of a:%p the location of b:%p\n",&a,&b);
	swap(&b);
	printf("after call swap:a=%d b=%d\n",a,b);
	printf("the location of a:%p the location of b:%p\n",&a,&b);
	return 0;
}
