#include<stdio.h>
int max=0,min=0;
float ave(int a[],int n);
int main()
{
	float a;
	int s1[10]={67,87,90,93,74,65,78,88,99,78};
	a=ave(s1,10);//对于有附加作用（会修改变量）的函数或表达式，尽量单独作为语句但不要作函数参数
	printf("ave1=%5.1f max=%d min=%d\n",a,max,min);
	/*函数不一定从左往右计算*/
}
float ave(int a[],int n)
{
	int i;
	float sum;
	max=min=sum=a[0];
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
