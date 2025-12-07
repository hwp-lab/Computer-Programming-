#include<stdio.h>
int main()
{
	int a[100];
	int n,t;
	int i,j,k;
	printf("n=");
	scanf("%d",&n);
	printf("输入%d个数",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	/*数组元素按逆序存放*/
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	/*交换任意两个数组元素*/
	while(1)
	{
		printf("输入要交换元素的编号：");
		scanf("%d%d",&i,&j);
		if(i>=0&&i<n&&j>=0&&j<n)
		{
			a[i]=a[i]+a[j];
			a[j]=a[i]-a[j];
			a[i]=a[i]-a[j];
		}
		else	
			break;
		for(k=0;k<n;k++)
			printf("%d ",a[k]);
		printf("\n");
	}
}
