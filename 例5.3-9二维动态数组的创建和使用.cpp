#include<stdio.h>
#include<stdlib.h>
void random(int **v,int i,int j);
void print(int **v,int i,int j);
int main()
{
	int row,col,i;
	int **p;
	printf("input row and col:");
	scanf("%d %d",&row,&col);
	p=(int**)malloc(row*sizeof(int *));//int *不理解
	if(p==NULL)
	{
		printf("not enough memory\n");
		exit(1);//非正常退出
	}
	for(i=0;i<row;i++)
	{
		p[i]=(int*)malloc(col*sizeof(int));
		if(!p[i])//!p[i]是1的话，说明p[i]是0
		{
			printf("not enough memory\n");
			exit(1);//非正常退出
		}
	}
	random(p,row,col);
	print(p,row,col);
	return 0;
}
void random(int **v,int m,int n)
{
	srand(time_t(NULL));//用time不可以，必须time_t
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			v[i][j]=rand()%100;
}
void print(int **v,int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",v[i][j]);
		printf("\n");
	}
}
