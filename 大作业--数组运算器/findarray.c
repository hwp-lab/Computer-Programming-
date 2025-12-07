#include<stdio.h>
/*顺序查找*/
void findorder(int*s,int y,int n)
{
	int i,t=0;
	for(i=0;i<y;i++)
		if(s[i]==n)
		{
			printf("Element found, index is: %d\n",i);
			t=1;
			break;
		}
	if(!t)
		printf("no found\n");
}
/*二分查找*///二分查找的前提是数组有序！！！！！
void findbinary(int*s,int y,int a)
{
	int t=0;
	int low,mid,high;
	low=0;
	high=y-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(s[mid]==a)
		{
			printf("Element found, index is: %d\n",mid);
			t=1;
			break;
		}
		else if(a<s[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(!t)
		printf("no found\n");
}
