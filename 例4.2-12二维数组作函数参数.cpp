#include<stdio.h>//不确定几列咋办？？？
int max(int a[][4],int m,int n);
int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	printf("max is %d\n",max(a,3,4));
	return 0;
}
int max(int a[][4],int m,int n)
{
	int i,j;
	int max=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(max<a[i][j])
				max=a[i][j];
	return max;
}
