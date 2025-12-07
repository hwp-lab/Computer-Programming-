#include<stdio.h>
#include<string.h>
int main()
{
	struct leader
	{
		char name[20];
		int count;
	}l[3]={"a",0,"ab",0,"abc",0};
	int i,j;
	char x[20];
	printf("choose the leader:a/ab/abc\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",x);
		for(j=0;j<3;j++)
			if(strcmp(x,l[j].name)==0)
				l[j].count=l[j].count+1;
	}
	printf("result\n");
	for(i=0;i<3;i++)
		printf("%5s:%d\n",l[i].name,l[i].count);
	return 0;
}
