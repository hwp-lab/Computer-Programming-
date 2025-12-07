#include<stdio.h>
#include<string.h>
int main()
{
	struct candidate
	{
		int num;
		char name[20];
		char sex;
		int count;
	};
	int i,m,n,k=1;
	int x;
	char y[20];
	printf("输入候选人个数：");
	scanf("%d",&n);
	struct candidate c[n];
	printf("输入%d位候选人信息（编号、姓名、性别）\n",n);
	for(i=0;i<n;i++)
		scanf("%d %s %c",&c[i].num,c[i].name,&c[i].sex);
	printf("开始投票：\n0编号，1姓名，10结果\n");
	while(k)
	{
		scanf("%d",&m);
		switch(m)
		{
		case 0:
			scanf("%d",&x);
			for(i=0;i<n;i++)
				if(c[i].num==x)
				{
					c[i].count++;
					break;
				}
			if(i==n)
				printf("输入编号错误\n");
			break;
		case 1:
			scanf("%s",y);
			for(i=0;i<n;i++)
			{
				if(strcmp(c[i].name,y)==0)//strcmp不仅能比较长度！
				{
					c[i].count++;
					break;
				}
			}
			if(i==n)
				printf("输入姓名错误\n");
			break;
		case 10:
			k=0;
			break;
		default:
			printf("error\n");
			break;
		}
	}
	for(i=0;i<n;i++)
		printf("%d %s %c %d\n",c[i].num,c[i].name,c[i].sex,c[i].count);
	return 0;
}
