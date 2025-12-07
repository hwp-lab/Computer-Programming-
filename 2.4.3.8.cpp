#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a[20],b[20]={0};
	int i,j,k;
	int x;
	int mid,low=0,high=19;
	for(i=0;i<20;i++)
	{
		a[i]=rand()%101;
		printf("%4d ",a[i]);
		if(i%5==4)
			printf("\n");
		if(a[i]<0||a[i]>100)
		{
			printf("Error");
			break;
		}
	}
	for(i=0;i<20;i++)
	{
		for(j=i;j>0;j--)
		{
			if(a[i]<b[j-1])
				b[j]=b[j-1];
			else
				break;
		}
		b[j]=a[i];
	}
	printf("按升序排列的随机数\n");
	for(j=0;j<20;j++)
	{
		printf("%4d ",b[j]);
		if(j%5==4)
			printf("\n");
	}
	for(k=0;k<3;k++)
	{
	printf("输入你要找的数据：");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x==b[mid])
		{
			printf("你要找的数据在数组的位置：%d\n",mid);
			break;
		}
		else if(x<b[mid])
			high=mid-1;
		else if(x>b[mid])
			low=mid+1;
	}
	if(x!=b[mid])
		printf("No found.\n");
	low=0;
	high=19;
	}
	return 0;
}
