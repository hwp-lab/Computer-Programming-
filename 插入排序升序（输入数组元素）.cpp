#include<stdio.h>
#define n 5
int main()
{
	int m[n];
	int i,j,x;
	for(i=0;i<n;i++)
	{
		printf("Input data:");
		scanf("%d",&x);
		for(j=i;j>0;j--)
		{
			if(x<m[j-1])
				m[j]=m[j-1];
			else
				break;
		}
		m[j]=x;
	}
	for(i=0;i<n;i++)
		printf("%d ",m[i]);
	return 0;
}
