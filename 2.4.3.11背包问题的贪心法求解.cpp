#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},a0;//编号
	float b[10]={0},b0;//重量
	int c[10]={0},c0;//价值
	float d[10]={0},d0;//单位价值
	int v,n;
	int i,j;
	printf("输入背包容量：");
	scanf("%d",&v);
	printf("输入物品数量：");
	scanf("%d",&n);
	printf("输入物品编号（行行好按顺序）：");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("输入物品重量：");
	for(i=0;i<n;i++)
		scanf("%f",&b[i]);
	printf("输入物品价值：");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
		d[i]=c[i]/b[i];
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(b[i]<b[j])
			{
				b0=b[i];
				b[i]=b[j];
				b[j]=b0;
				a0=a[i];
				a[i]=a[j];
				a[j]=a[0];
				c0=c[i];
				c[i]=c[j];
				c[j]=c0;
			}
}
