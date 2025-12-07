#include<stdio.h>
int main()
{
	int n,r;
	int i;
	int sum=0;
	scanf("%d",&n);
	r=n%4;
	for(i=n;i/4>=1;i=i-4)
	{
		if(i==n)
			sum=i*(i-1)/(i-2)+i-3;
		else
			sum=sum-i*(i-1)/(i-2)+i-3;
	}	
	if(r==3)
		sum=sum-3*2/1;
	if(r==2)
		sum=sum-2*1;
	if(r==1)
		sum=sum-1;
	printf("%d",sum);
	return 0;
}
