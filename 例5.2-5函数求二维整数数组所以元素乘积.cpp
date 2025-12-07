#include<stdio.h>
#define m 3
#define n 4
int multiple1(int(*p)[n],int r)//形参不要和宏定义重名
{
	int i,j;
	int s=1;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			s=s*p[i][j];
	return s;
}
int multiple2(int*p,int r,int q)
{
	int i,j;
	int s=1;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			s=s*p[i*n+j];
	return s;
}
int main()
{
	int a[m][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	printf("multiple1:%d\n",multiple1(a,m));
	printf("multiple2:%d\n",multiple2(*a,m,n));
	return 0;
}
