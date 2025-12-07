#include<stdio.h>
int main()
{
	char format[]="%10.2f\n";
	double f=3.1415926535;
	int i;
	printf("i=");
	scanf("%d",&i);
	format[4]=i+'0';//通过‘0’来转换i乘asK值
	printf(format,f);
	return 0;
}
