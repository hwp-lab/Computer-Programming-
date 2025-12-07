#include<stdio.h>
struct birth
{
	short year,month,day;
};
struct student
{
	int num;
	char name[20];
	struct birth birthday;
	float gpa;
};
int main()
{
	struct student s[3];
	int i;
	FILE*fp;
	for(i=0;i<3;i++)
	{
		printf("输入学号、姓名、出生年月日、绩点：");
		scanf("%d %s %hd %hd %hd %f",&s[i].num,&s[i].name,
			&s[i].birthday.year,&s[i].birthday.month,&s[i].birthday.day,&s[i].gpa);
	}
	fp=fopen("student.txt","w");
	for(i=0;i<3;i++)
		fprintf(fp,"%d %s %hd %hd %hd %.2f\n",s[i].num,s[i].name,
			s[i].birthday.year,s[i].birthday.month,s[i].birthday.day,s[i].gpa);
	fclose(fp);
	return 0;
}
