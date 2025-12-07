#include<stdio.h>
#include<math.h>
int Isprime(int n)
{
	int i=2;
	if(n<=1)
	{
		printf("error\n");
		return 0;
	}
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main()
{
	int x;
	printf("input a number:");
	scanf("%d",&x);
	if(Isprime(x)==1)
		printf("%d is a prime.",x);
	else
		printf("%d is not a prime.",x);
	return 0;
}
