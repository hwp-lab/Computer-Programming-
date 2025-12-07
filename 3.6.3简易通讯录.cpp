#include<stdio.h>
#include<string.h>
int main()
{
	struct person
	{
		char name[20];
		char phone[12];
		char wx[20];
		char qq[12];
	}p[100]={0};
	int m,n=0,t;
	int i;
	FILE*fp;
	for(;;)
	{
	printf("1-输入\n2-显示\n3-添加\n4-查找\n0-存入文件\n10-结束\n");
	scanf("%d",&m);
	switch(m)
	{
	case 1:/*输入*/
		printf("添加通讯人个数：");
		scanf("%d",&t);
		n=n+t;
		for(i=0;i<t;i++)
		{	
			printf("输入联系人姓名、手机号、微信号、QQ号：");
			scanf("%s%s%s%s",p[i].name,p[i].phone,p[i].wx,p[i].qq);
		}
		break;
	case 2:/*显示*/
		fp=fopen("address book.txt","r");
		if (fp == NULL)
		{
			printf("无法打开文件\n");
			break;
		}
		else
		{
			i=0;
			while (fscanf(fp, "%s %s %s %s", p[i].name, p[i].phone, p[i].wx, p[i].qq) == 4)
			{
				printf("%s %s %s %s\n", p[i].name, p[i].phone, p[i].wx, p[i].qq);
				i++;
				n=i;
			}
		}
		break;
	case 3:/*添加*/
		printf("输入联系人姓名、手机号、微信号、QQ号：");
		scanf("%s%s%s%s",p[n].name,p[n].phone,p[n].wx,p[n].qq);
		n=n+1;
		break;
	case 4:/*查找*/
		char z;
		char x[20];
		getchar();
		printf("选择查找方式：a-姓名\nb-手机号\nc-微信号\nd-QQ号\n");
		z=getchar();
		getchar();
		switch(z)
		{
		case 'a':
			printf("输入姓名");
			scanf("%s",x);
			for(i=0;i<n;i++)
				if(strcmp(p[i].name,x)==0)
					break;
			if(i==n)
				printf("error\n");
			else
				printf("%s %s %s %s\n",p[i].name,p[i].phone,p[i].wx,p[i].qq);
			break;
		case 'b':
			printf("输入手机号");
			scanf("%s",x);
			for(i=0;i<n;i++)
				if(strcmp(p[i].phone,x)==0)
					break;
			if(i==n)
				printf("error\n");
			else
				printf("%s %s %s %s\n",p[i].name,p[i].phone,p[i].wx,p[i].qq);
			break;
		case 'c':
			printf("输入微信号");
			scanf("%s",x);
			for(i=0;i<n;i++)
				if(strcmp(p[i].wx,x)==0)
					break;
			if(i==n)
				printf("error\n");
			else
				printf("%s %s %s %s\n",p[i].name,p[i].phone,p[i].wx,p[i].qq);
			break;
		case 'd':
			printf("输入QQ号");
			scanf("%s",x);
			for(i=0;i<n;i++)
				if(strcmp(p[i].qq,x)==0)
					break;
			if(i==n)
				printf("error\n");
			else
				printf("%s %s %s %s\n",p[i].name,p[i].phone,p[i].wx,p[i].qq);
			break;
		default:
			printf("error");
			break;
		}
		break;
	case 0:/*存入文件*/
		if (fp == NULL)
		{
			printf("无法打开文件\n");
			break;
		}
		else
		{
				fp=fopen("address book.txt","a");
				for(i=0;i<n;i++)
				fprintf(fp,"%s %s %s %s\n",p[i].name,p[i].phone,p[i].wx,p[i].qq);
				fclose(fp);
		}
		break;
	case 10:
		return 0;
	default:/*错误*/
		printf("error\n");
		break;
	}
	}
}
