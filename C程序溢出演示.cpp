#include<stdio.h>
int main()
{
	short a=32767;
	printf("short类型的长度是%d\n",(int)sizeof(short));
	a=a+20;
	printf("a的值是%d",a);
	return 0;
}
