#include<stdio.h>
void decompose(double x,long *intpart,double*fracpart)
{
	*intpart=(long)x;
	*fracpart=x-*intpart;//x是long啊
}
int main()
{
	double x=3.1415926;
	long *intpart;//指针的话要初始化!!!!1
	double *fracpart;
	decompose(x,intpart,fracpart);
	printf("%ld  %f",*intpart,*fracpart);
	return 0;
}
