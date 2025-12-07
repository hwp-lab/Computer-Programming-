#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	int i,j;
	printf("array a：\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			b[j][i]=a[i][j];
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("array b：\n");
	for(j=0;j<=2;j++)
	{
		for(i=0;i<=1;i++)
			printf("%3d",b[j][i]);
		printf("\n");
	}
	return 0;
}
