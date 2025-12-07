#include<stdio.h>
#define llmax 9223372036854775807
long long factorial(int);
double power(double,int);//power幂，乘方
double sum(double,int);
int main()
{
	float x;
	int n;
	printf("input x=");
	scanf("%f",&x);
	printf("input precision n=");
	scanf("%d",&n);
	if(sum(x,n)!=0)
		printf("approximate calculation is %lf",sum(x,n));
	return 0;
}
/*求和函数*/
double sum(double x,int n)
{
	int i;
	double sum=1;
	for(i=1;i<=n;i++)
	{
		if(factorial(i)==0)
		{
			sum=0;
			break;
		}
		sum=sum+power(x,i)/factorial(i);	
	}
	return sum;
}
/*阶乘函数*/
long long factorial(int n)
{
	long long a=1;
	int i;
	for(i=1;i<=n;i++)
	{
		if(a>llmax/i)
		{
			printf("overflow\n");
			a=0;
			break;
		}
		a=a*i;
	}
	return a;
}
/*指数函数*/
double power(double x,int n)
{
	double a=1;
	int i;
	for(i=1;i<=n;i++)
		a=a*x;
	return a;
}
