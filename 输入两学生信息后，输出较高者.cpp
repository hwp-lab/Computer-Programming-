#include<stdio.h>
struct student
{
	int num;
	char name[20];
	float score;
}s1,s2;
int main()
{
	printf("输入学生学号、姓名、成绩：");
	scanf("%d %s %f",&s1.num,s1.name,&s1.score);
	printf("输入学生学号、姓名、成绩：");
	scanf("%d %s %f",&s2.num,s2.name,&s2.score);
	printf("the higher score is:\n");
	if(s1.score>s2.score)
		printf("%d %s %.1f",s1.num,s1.name,s1.score);
	else if(s1.score<s2.score)
		printf("%d %s %.1f",s2.num,s2.name,s2.score);
	else
	{
		printf("%d %s %.1f\n",s1.num,s1.name,s1.score);
		printf("%d %s %.1f\n",s2.num,s2.name,s2.score);
	}
	return 0;
}
