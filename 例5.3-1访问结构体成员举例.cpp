#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct student
{
	int num;
	char name[20];
	char gender;
	float score;
}stu;
int main()
{
	stu s;
	stu*t;
	s.num=20006001;
	strcpy(s.name,"hwp");
	s.gender='M';
	s.score=99;
	t=&s;
	printf("num:%d name:%s gender:%c score:%.1f\n",s.num,s.name,s.gender,s.score);
	printf("num:%d name:%s gender:%c score:%1.f\n",(*t).num,(*t).name,(*t).gender,(*t).score);
	printf("num:%d name:%s gender:%c score:%1.f\n",t->num,t->name,t->gender,t->score);
	return 0;
}
