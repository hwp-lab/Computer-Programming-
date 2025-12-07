#include<stdio.h>
int main()
{
	int i,j;
	int n[3];
	int t;
	for(;;)
	{
	printf("输入三个整数；");
	scanf("%d%d%d",&n[0],&n[1],&n[2]);	
	for(i=0;i<2;i++)
		{
		for(j=i+1;j<3;j++)
		{
			if(n[j]<n[i])
			{
				t=n[j];
				n[j]=n[i];
				n[i]=t;
			}
		}	
		}
	printf("三个数由小到大是：%d<%d<%d\n",n[0],n[1],n[2]);
	}
	return 0;
}
