#include<stdio.h>
int max,min;
float ave(int a[],int n);
int main()
{
	int s1[10]={67,87,90,93,74,65,78,88,99,78};
	int s2[5]={98,76,87,83,95};
	printf("ave1=%5.1f max=%d min=%d\n",ave(s1,10));
	printf("ave2=%5.1f max=%d min=%d\n",ave(s2,5));
}
float ave(int a[],int n)
{
	int i;
	float sum;
	float max=min=sum=a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	return sum/n;
}
