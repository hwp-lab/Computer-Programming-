#include<stdio.h>
int main()
{
	int a[100];
	int i,n,x;
	int f,k=0,u=0;
	int low,mid,high;
	printf("n=");
	scanf("%d",&n);
	printf("输入%d个数",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("你输入的%d个数是 1-无序、2-升序、3-降序:",n);
	scanf("%d",&f);
	printf("要查找的数据x=");
	scanf("%d",&x);
	/*乱序查找*/
	if(f==0)
	{
		for(i=0;i<n;i++)
			if(a[i]==x)
			{
				printf("你要查的数据在数组的位置：%d\n",i);
				u=1;
			}
		if(u==0)
			printf("no found");
	}
	/*二分查找*/
	else if(f==1||f==2)
	{
		low=0;
		high=n-1;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(x==a[mid])
			{
				printf("你要查的数据在数组的位置：%d\n",mid);
				k=1;
				break;
			}
			if(f==1)
			{
				if(a[mid]<x)
					low=mid+1;
				else
					high=mid-1;
			}
			else 
			{
				if(a[mid]<x)
					high=mid-1;
				else
					low=mid+1;
			}
		}	
		if(k==0)
			printf("no found");
	}
	else printf("error");
	}
