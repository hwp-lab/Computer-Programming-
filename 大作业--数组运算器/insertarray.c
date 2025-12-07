#include<stdio.h>
#include"judgearray.h"
/*----------插入函数----------*/
/*插入指定下标位置*/
void incertain(int*s,int y,int a,int b)
{
	int i;
	for(i=y;i>=a+1;i--)
		s[i]=s[i-1];
	s[a]=b;
}
/*有序数组插入新元素*/
void insorted(int*s,int y,int c)
{
	int m;
	int i=0,t;
	printf("input:\n");
	printf("1-升序\n");
	printf("2-降序\n");
	scanf("%d",&m);
	switch (m) 
	{
	case 1:
		int a=ifascending(s,y);
		if(a!=1)//莫名其妙加引号还...
		{
			printf("error\n");
			break;
		}
		while(c>s[i])
			i++;
		t=i;
		for(i=y;i>=t+1;i--)
			s[i]=s[i-1];
		s[t]=c;
		break;
	case 2:
		a=ifdescending(s,y);
		if(!a)
		{
			printf("error\n");
			break;
		}
		while(c<s[i])
			i++;
		t=i;
		for(i=y;i>=t+1;i--)
			s[i]=s[i-1];
		s[t]=c;
		break;
	}
}
