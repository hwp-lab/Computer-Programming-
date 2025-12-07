#include<stdio.h>
int main()
{
	struct point
	{
		float x;
		float y;
	}p[2];
	int i;
	for(;;)
	{
	printf("输入a,b两点横纵坐标");
	for(i=0;i<2;i++)
		scanf("%f %f",&p[i].x,&p[i].y);
	if(p[0].x==p[1].x&&(p[0].y==p[1].y))
		printf("两点重合\n");
	else if(p[0].x==p[1].x&&(p[0].y!=p[1].y))
		printf("直线ab斜率不存在\n");
	else
		printf("a-b直线的斜率是%.2f\n",(p[0].y-p[1].y)/(p[0].x-p[1].x));
	}
	return 0;
}
