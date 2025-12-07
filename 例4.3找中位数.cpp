#include<stdio.h>
/*输入函数*/
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
/*排序函数*/
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}
float median(int a[],int n)
{
	float m;
	if(n%2==0)
		m=(a[n/2]+a[n/2-1])/2.0;
	else 
		m=a[(n-1)/2];
	return m;
}
int main()
{
	int n;
	printf("输入元素个数：");
	scanf("%d",&n);
	printf("输入%d个整数",n);
	int a[100];
	input(a,n);
	sort(a,n);
	printf("中位数是%.1f",median(a,n));
	return 0;
}
