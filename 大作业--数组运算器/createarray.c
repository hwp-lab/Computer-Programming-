#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define z 20
/*指定范围随机数*/
void randcreate(int*s,int a,int b)
{
	srand((unsigned)time(NULL));
	for(int i=0;i<z;i++)
	{
		s[i]=rand()%(b-a)+a;
		printf("%d ",s[i]);
	}
	printf("\n");
}
/*等差数列*/
void dc(int*s,int c,int d)
{
	int i;
	s[0]=c;
	for(i=1;i<z;i++)
		s[i]=s[i-1]+d;
}
