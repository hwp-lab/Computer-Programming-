#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *randdate(int n);
int main()
{
	int n,i;
	printf("n=");
	scanf("%d",&n);
	int *a=NULL;//数组不行，初值是空
	a=randdate(n);
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
int *randdate(int n)
{
	int*p=NULL;
	p=(int*)malloc(n*sizeof(int));//一下子把n个的内存都分配了
	if(p==NULL)
	{
		printf("not enough memory\n");
		exit(1);
	}
	srand((unsigned int)time(NULL));
	int i;
	for(i=0;i<n;i++)
		*(p+i)=rand();//这么说
	return p;
	
}
