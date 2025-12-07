#include<stdio.h>
float max(float a[],int);
int main()
{
	int i,n;
	printf("数组元素数：");
	scanf("%d",&n);
	float a[n];
	printf("输入一个有%d个元素的实型数组：",n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	printf("最大的数是：%.2f",max(a,n));
	return 0;
}
float max(float a[],int n)
{
	float m=a[0];
	int i;
	for(i=0;i<n;i++)
		if(a[i]>m)
			m=a[i];
	return m;
}
