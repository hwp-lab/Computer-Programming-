#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float k;
	for(;;)
	{
		printf("请输入一个数：");
		scanf("%d",&n);
		k=sqrt(n);
		if(n>=3)
		{
		for(i=2;i<=k;i++)
			if(n%i==0) break;
		if(i<=k)printf("%d is not a prime number.\n",n);
		else printf("%d is a prime number.\n",n);
		}
		else printf("Error");
	}
	return 0;
}
