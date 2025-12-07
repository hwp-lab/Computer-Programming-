#include<stdio.h>
int sort(int a[],int,int,int);
int delet(int a[],int,int);
int main()
{
	int i,n,x;
	int t;
	printf("n=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		a[i]=2*i+1;
	printf("x=");
	scanf("%d",&x);
	t=sort(a,x,0,n-1);
	if(t>=0)
	{
		n=delet(a,t,n);//delete中直接更新n
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	else //不用else if了
		printf("no found\n");
	return 0;
}
/*递归二分法查找*/
int sort(int a[],int x,int low,int high)
{
	if(low>high)
		return -1;
	int mid=(low+high)/2;
	if(a[mid]==x)
		return mid;
	else if(a[mid]<x)
		return sort(a,x,mid+1,high);
	else
		return sort(a,x,low,mid-1);//用return递归，想不到。。。
}
int delet(int a[],int t,int n)
{
	int i;
	for(i=t;i<n-1;i++)
		a[i]=a[i+1];
	return n-1;
}
