#include<stdio.h>
#include<string.h>
void sort(int a[],int);
void combine(int a[],int b[],int c[],int,int);
int main()
{
	int m,n;
	int i;
	printf("输入两数组长度：");
	scanf("%d %d",&m,&n);
	if(m<=0||n<=0)
	{
		printf("error");
		return -1;
	}
	int a[m],b[n];
	printf("输入数组一：");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	printf("输入数组二：");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	int c[m+n];
	combine(a,b,c,m,n);
	sort(c,m+n);
	printf("排序后结果是：");
	for(i=0;i<m+n;i++)
		printf("%d ",c[i]);
	return 0;
}
void sort(int a[],int n)
{
	int i,j;
	int t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}
void combine(int a[],int b[],int c[],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=m;i<m+n;i++)
		c[i]=b[i-m];
}
