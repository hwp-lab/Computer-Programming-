#include<stdio.h>
#include<math.h>
int isprime(int);
int invert(int);
int main()
{
	int i,t;
	for(i=100;i<=1000;i++)
	{
		t=invert(i);
		if(isprime(i)&&isprime(t))
			printf("%d ",i);
	}
	return 0;
}
int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;//若不是素数直接终止运行
	return 1;
}
int invert(int n)
{
	int a,b,c,t;
	a=n%10;
	b=(n/10)%10;
	c=n/100;
	t=100*a+10*b+c;
	return t;
}
