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
		for(i=0;i<m-1;i++)
		{
			for(j=0;j<m-1-i;j++)
			{
				if(n[j+1]<n[j])
				{
					t=n[j+1];
					n[j+1]=n[j];
					n[j]=t;
				}
			}	
		}
		for(i=0;i<m;i++)
			printf("%d ",n[i]);
		printf("\n");
	}
	return 0;
}
/*第一次外循环时最大值一定会挪到最后哎，第二次的时候就是循环部分的最大值挪到最后了*/
