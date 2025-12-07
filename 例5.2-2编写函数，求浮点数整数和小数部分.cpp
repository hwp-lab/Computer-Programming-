#include<stdio.h>
void decompose(double x,long *intpart,double*fracpart)
{
	*intpart=(long)x;
	*fracpart=x-*intpart;//x «long∞°
}
int main()
{
	double x=3.1415926;
	long intpart;
	double fracpart;
	decompose(x,&intpart,&fracpart);
	printf("%ld  %f",intpart,fracpart);
	return 0;
}
