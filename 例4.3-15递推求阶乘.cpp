#include<stdio.h>
long fac(int);
int main()
{
	int n;
	long f;
	printf("n=");
	scanf("%d",&n);
	f=fac(n);
	if(f!=-1)
		printf("%ld",f);
	return 0;
}
long fac(int n)
{
	long f;
	if(n<0)
	{
		printf("error");
		return -1;
	}
	if(n==0||n==1)
		f=1;
	else
		f=fac(n-1)*n;
	return f;
}
