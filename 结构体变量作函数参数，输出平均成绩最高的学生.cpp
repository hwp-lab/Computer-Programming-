#include<stdio.h>
#define n 3
struct student 
{
	int num;
	char name[20];
	float score[3];
	float ave;
};
void input(struct student s[]);
struct student max(struct student s[]);
void print(struct student s);
int main()
{
	struct student s[n];
	input(s);
	print(max(s));
	return 0;
}
void input(struct student s[])
{
	int i;
	printf("输入%d名学生学号、姓名、三门课成绩：\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s%f%f%f",
			&s[i].num,s[i].name,&s[i].score[1],&s[i].score[2],&s[i].score[3]);
		s[i].ave=(s[i].score[1]+s[i].score[2]+s[i].score[3])/3;
	}
}
struct student max(struct student s[])
{
	int i,t=0;
	for(i=0;i<n;i++)
		if(s[i].ave>s[t].ave)
			t=i;
	return s[t];
}
void print(struct student s)
{
	printf("成绩最高的学生是：");
	printf("%d %s %4.1f %4.1f %4.1f %4.1f",
		s.num,s.name,s.score[1],s.score[2],s.score[3],s.ave);
}
