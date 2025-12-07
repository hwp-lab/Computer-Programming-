#include<stdio.h>
#include<string.h>
void sort1(int a[],int);
void sort2(int a[],int);
void sort3(int a[],int);
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
	sort1(a,m);
	printf("排序后的数组一：");
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("输入数组二：");
	sort3(b,n);
	printf("排序后的数组二：");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
	int c[m+n];
	combine(a,b,c,m,n);
	printf("排序后结果是：");
	for(i=0;i<m+n;i++)
		printf("%d ",c[i]);
	return 0;
}
void sort1(int a[],int n)//选择排序
{
	int i,j;
	int t,s;
	for(i=0;i<n-1;i++)
	{
		s=i;
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
				s=j;
		t=a[i];
		a[i]=a[s];
		a[s]=t;
	}
}
void sort2(int a[],int n)//冒泡排序
{
	int i,j;
	int t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
void sort3(int a[],int n)//插入排序
{
	int i,j;
	int x;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(j=i;j>0;j--)
			if(x<a[j-1])
				a[j]=a[j-1];
			else
				break;
		a[j]=x;
	}

	
}
void combine(int a[],int b[],int c[],int m,int n)
{
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
}
