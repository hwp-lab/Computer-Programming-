#include<stdio.h>
struct stu
{
	char name[16];
	float a,b,c,sum;
};
int main()
{
	int i;
	FILE*fp;
	struct stu s[3]={{"hwp",90,92,96,0},{"ytq",85,88,95,0},\
		{"lyh",95,86,92,0}};
	if(!(fp=fopen("student.txt","w")))
		{
			printf("can not open this file\n");
			return 1;
		}
	for(i=0;i<3;i++)
	{
		s[i].sum=s[i].a+s[i].b+s[i].c;
		fprintf(fp,"%s %f %f %f %f\n",
			s[i].name,s[i].a,s[i].b,s[i].c,s[i].sum);
	}
	fclose(fp);
	if(!(fp=fopen("student.txt","r")))
	{
		printf("can not open this file\n");
		return 1;
	}
	for(i=0;i<3;i++)
	{
		fscanf(fp,"%s %f %f %f %f",&s[i].name,&s[i].a,\
			&s[i].b,&s[i].c,&s[i].sum);
		printf("%-16s %6.1f %6.1f %6.1f %6.1f\n",s[i].name,s[i].a,\
			s[i].b,s[i].c,s[i].sum);//-±íÊ¾×ó¶ÔÆë°¥
	}
	fclose(fp);
	return 0;
}
