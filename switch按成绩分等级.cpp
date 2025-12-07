#include<stdio.h>
int main()
{
	int score;
	for(;;)
	{	
	printf("Your score is:");
	scanf("%d",&score);
	if(score>=0&&score<=100)
	{
		switch(score/10)
		{
		case 10:printf("完美\n");break;
		case 9:printf("优秀\n");break;
		case 8:printf("良好\n");break;
		case 7:printf("中等\n");break;
		case 6:printf("及格\n");break;
		default:printf("不及格\n");
		}
	}
	else printf("输入错误\n");
	}
	return 0;
}
