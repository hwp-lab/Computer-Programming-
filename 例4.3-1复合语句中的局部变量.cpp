#include<stdio.h>
int max(int a[][4],int m,int n);
int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	printf("max is %d\n",max(a,3,4));
	return 0;
}
int max(int a[][4],int m,int n)
{
	int i;
	int max=a[0][0];
	for(i=0;i<3;i++)
	{
		int j;//复合语句中可定义变量，作用域从变量定义处开始，到右大括号为止
		for(j=0;j<4;j++)
			if(max<a[i][j])
				max=a[i][j];
	}
	return max;
}
