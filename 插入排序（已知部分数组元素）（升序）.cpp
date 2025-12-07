#include<stdio.h>
#define n 5
int main()
{
	int m[n]={1,3,5,8};
	int x,i;
	printf("x=");
	scanf("%d",&x);
	for(i=n-1;i>=0;i--)
	{
		if(x<m[i-1]) 
			m[i]=m[i-1]; 
		else break;
	}
	m[i]=x;
	for(i=0;i<n;i++)
		printf("%d\t",m[i]);
	return 0;
}
