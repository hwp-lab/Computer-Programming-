#include<stdio.h>
int main()
{
	int a[100],b[100]={0};
	int n,i,j;
	printf("n=");
	scanf("%d",&n);
	printf("输入%d个数",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=0) {printf("Error");break;}
	}
	for(j=0;j<100;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==j)
				b[j]=b[j]+1;
		}
		if(b[j]!=0)
			printf("%d出现%d次\n",j,b[j]);
	}
	return 0;
}
