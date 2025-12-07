#include<stdio.h>
#define n 5
int main()
{
	int m[n]={1,3,5,8};
	int x,i;
	printf("x=");
	scanf("%d",&x);
	for(i=n-2;i>=0;i--)
	{
		if(x<m[i]) 
			m[i+1]=m[i]; 
		else break;
	}
	if(x<m[0])
		m[0]=x;
	else
	{
		m[i+1]=x;
	}		
	for(i=0;i<n;i++)
		printf("%d\t",m[i]);
	return 0;
}
/*用j-1不用j+1,没想明白到底为什么复杂了*/
