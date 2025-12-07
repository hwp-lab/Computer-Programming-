#include<stdio.h>
int main()
{
	double a[5]={1.1,2.2,3.3,4.4,5.5};
	double *p=a;
	int i;
	for(i=0;i<5;i++)
	{
		printf("&a[%d]=%p;p=%p;a[%d]=%f;*p=%f\n",i,&a[i],p,i,a[i],*p);
		p++;
	}
	return 0;
}
