#include<stdio.h>
#define n 3
struct student
{
	int num;
	char name[20];
	float score;
} s[n];
/*主函数*/
int main() {
	int i, j,m, t;
	float f;
	struct student d[n]={0};
	for (;;) 
	{
		printf("1-输入成绩；\n2-修改成绩；\n3-降序显示成绩;\n0-存入文件\n请选择：");
		scanf("%d", &m);
		FILE*fp;
		switch (m) 
		{
			/*成绩输入*/
			case 1:
				for (i = 0; i < n; i++) {
					printf("输入学生学号、姓名、成绩：");
					scanf("%d %s %f", &s[i].num, s[i].name, &s[i].score);
				}
				break;
			/*成绩修改*/
			case 2:
				printf("输入学号：");
				scanf("%d", &t);
				for (i = 0; i < n; i++)
					if (t == s[i].num) 
					{
						printf("输入新成绩：");
						scanf("%f", &f);
						s[i].score = f;
						break;
					}
				if (i == n)
					printf("该学号不存在\n");
				break;
			/*降序显示成绩*/
			case 3:
				for(i=0;i<n;i++)
				{
					for(j=i;j>0;j--)
						if(s[i].score>d[j-1].score)
							d[j]=d[j-1];
						else break;
					d[j]=s[i];
				}
				for(i=0;i<n;i++)
					printf("%d %s %.2f\n",d[i].num,d[i].name,d[i].score);
				break;
			/*存入文件*/
			case 0:
				fp = fopen("student score.txt", "w+");
				for (i = 0; i < n; i++)
					fprintf(fp, "%d %s %.2f\n", s[i].num, s[i].name, s[i].score);
				fclose(fp);
				return 0;
			default:
				printf("输入错误\n");
				break;
		}
	}
}
