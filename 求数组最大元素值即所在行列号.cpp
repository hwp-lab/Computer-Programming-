#include<stdio.h>
int main()
{
	int a[3][4]={{4,6,2,4},{13,45,63,47},{34,65,90,4}};
	int i,j,max;
	int x,y;
	max=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(max<a[i][j])
		{
			max=a[i][j];
			x=i;
			y=j;
		}
	printf("max=a[%d][%d]=%d",x,y,max);
	return 0;
}
