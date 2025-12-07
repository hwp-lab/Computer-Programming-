#include<stdio.h>
struct stu
{
	char num[20]={0};
	int score;
};
void sortnum(struct stu s[],int);
void sortscore(struct stu s[],int);
int mystrcmp(char s[],char t[]);
int main()
{
	int i,n;
	char m;
	printf("the number of students:n=");
	scanf("%d",&n);
	struct stu s[n];
	FILE*fp;
	fp=fopen("num&score.txt","r");
	if(fp==NULL)
	{
		printf("error opening file\n");
		return 1;
	}
	for(i=0;i<n;i++)
		fscanf(fp,"%s %d",s[i].num,&s[i].score);
	for(;;)
	{
		printf("输入：a-按学号排序\nb-按成绩排序\nq-退出\n");
		getchar();//清除上次输入的换行
		m=getchar();
		switch(m)
		{
		case 'a':
			sortnum(s,n);
			break;
		case 'b':
			sortscore(s,n);
			break;//别落了。。。
		case 'q':
			fp=freopen("num&score.txt","w",fp);
			if(fp==NULL)
			{
				printf("error opening file\n");
				return 1;
			}
			for(i=0;i<n;i++)
				fprintf(fp,"%s %d\n",s[i].num,s[i].score);
			fclose(fp);
			return 0;
		default:
			printf("input error\n");
		}
	}
}
void sortnum(struct stu s[],int n)//学号排序
{
	int i,j,k;
	struct stu t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			k=mystrcmp(s[i].num,s[j].num);
			if(k>0)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	for(i=0;i<n;i++)
		printf("%s %d\n",s[i].num,s[i].score);
}
void sortscore(struct stu s[],int n)
{
	int i,j;
	struct stu t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(s[i].score>s[j].score)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
	for(i=0;i<n;i++)
		printf("%s %d\n",s[i].num,s[i].score);
}
int mystrcmp(char s[],char t[])
	{
		int i=0;
		while(s[i]!='\0'&&t[i]!='\0')
		{
			if(s[i]!=t[i])
				return s[i]-t[i];
			i++;
		}
		return s[i]-t[i];
	}
