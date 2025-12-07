#include<stdio.h>//敲的过程中理解了...
int a=3;
void test()
{
	printf("test开始的a=%d\n",a);
	a++;
	printf("test结束的a=%d\n",a);
}
int main()
{
	printf("main开始的a=%d\n",a);
	a=a*4;
	test();
	printf("test执行后的a=%d\n",a);
	return 0;
}
