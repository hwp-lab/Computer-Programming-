#include<stdio.h>
int main()
{
	int a[5]={1,2,3};
	int b[5]={0};
	int i;
	b[1]=a[1];
	printf("b=%d a=%d\n",b[1],a[1]);
	for(i=0;i<5;i++)
	{
		b[i]=a[i]+1;
		printf("a[%d]=%d b[%d]=%d\n",i,a[i],i,b[i]);
	}
	return 0;
}
