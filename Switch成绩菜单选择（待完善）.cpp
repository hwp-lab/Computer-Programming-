#include<stdio.h>
int main()
{
	int num;
	for(;;)
	{
	printf("成绩管理系统\n");
	printf("1.录入成绩\n");
	printf("2.修改成绩\n");
	printf("3.查询成绩\n");
	printf("0.退出系统\n");
	printf("请选择0-3\n");
	scanf("%d",&num);
	switch(num)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			return 0;
		default:
			printf("输入错误\n");
			return 0;
		}
	}
}
