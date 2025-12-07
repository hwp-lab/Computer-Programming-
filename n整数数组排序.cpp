#include<stdio.h>
#define m 10
int main()
{
	int i,j;
	int n[m];
	int t;
	for(;;)
	{
		printf("输入%d个整数；",m);
		for(i=0;i<m;i++)
			scanf("%d",&n[i]);
		for(i=0;i<m;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if(n[j]<n[i])
				{
					t=n[j];
					n[j]=n[i];
					n[i]=t;
				}
			}	
		}
		for(i=0;i<m;i++)
			printf("%d ",n[i]);
		printf("\n");
	}
	return 0;
}
