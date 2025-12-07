#include<stdio.h>
int main()
{
	float x=3.14159;
	float *p;
	p=&x;
	printf("%f\n",*p);
	printf("address:\nx-%p\n*p-%p\np-%p\n",&x,p,&p);
	return 0;
}
