#include<stdio.h>
int *getdata();
int main()
{
	int *p;
	int i;
	p=getdata();
	for(i=0;i<5;i++)
		printf("%d",*(p+i));
	return 0;
}
int *getdata()
{
	static int a[5];//必须确定长度...
	int i;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	return a;
}
