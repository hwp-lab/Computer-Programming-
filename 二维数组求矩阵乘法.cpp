#include<stdio.h>
int main()
{
	int a[2][3]={{5,8,3},{11,0,5}};
	int b[3][2]={{1,18},{2,11},{10,3}};
	int c[2][2];
	int i,j,k,s=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
				s=s+a[i][k]*b[k][j];
			c[i][j]=s;
			s=0;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%6d\t",c[i][j]);
		printf("\n");
	}
	return 0;
}
