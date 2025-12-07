#include<stdio.h>
#define a1 3
#define a2 4
#define b1 4
#define b2 2
int main()
{
	int a[a1][a2]={{5,8,3,4},{11,0,5,1},{1,1,0,2}};
	int b[b1][b2]={{1,18},{2,11},{10,3},{2,1}};
	int c[a2][b1];
	int i,j,k,s=0;
	for(i=0;i<a1;i++)
	{
		for(j=0;j<b2;j++)
		{
			for(k=0;k<a2;k++)
				s=s+a[i][k]*b[k][j];
			c[i][j]=s;
			s=0;
		}
	}
	for(i=0;i<a1;i++)
	{
		for(j=0;j<b2;j++)
			printf("%6d\t",c[i][j]);
		printf("\n");
	}
	return 0;
}
