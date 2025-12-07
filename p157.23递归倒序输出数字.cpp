#include<stdio.h>
#include<math.h>
int ip(int);
int main()
{
	int n,t;
	printf("n=");
	scanf("%d",&n);
	while(n!=0)
	{
		t=ip(n);
		n=n%(int)pow(10,t);
	}
}
int ip(int n)
{
	int i=0;
	while(n/10!=0)
	{
		n=n/10;
		i++;
	}
	printf("%d\n",n);
	return i;
}
