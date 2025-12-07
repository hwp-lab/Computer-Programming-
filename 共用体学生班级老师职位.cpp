#include<stdio.h>
struct person
{
	int num;
	char name[20];
	char sex;
	char job;
	union
	{
		int clas;
		char position[20];
	}category;
}p[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("input num,name,sex(f/m),job(s/t):\n");
		scanf("%d %s %c %c",&p[i].num,p[i].name,&p[i].sex,&p[i].job);
		if(p[i].job=='s')
		{
			printf("input class:");
			scanf("%d",&p[i].category.clas);
		}
		else if(p[i].job=='t')
		{
			printf("input position:");
			scanf("%s",p[i].category.position);
		}
		else
			printf("error\n");
	}
	printf("num name sex job class/position\n");
	for(i=0;i<2;i++)
		if(p[i].job=='s')
			printf("%d %s %c %c %d\n",
				p[i].num,p[i].name,p[i].sex,p[i].job,p[i].category.clas);
		else if(p[i].job=='t')
			printf("%d %s %c %c %s\n",
				p[i].num,p[i].name,p[i].sex,p[i].job,p[i].category.position);
	return 0;
}
