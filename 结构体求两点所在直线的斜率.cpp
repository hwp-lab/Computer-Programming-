#include<stdio.h>
#include<math.h>
int main()
{
	struct point
	{
		float x;
		float y;
	};
	struct point a={1.2,2.4};
	struct point b={1.5};
	printf("a-b直线的斜率是%.2f\n",(a.y-b.y)/(a.x-b.x));
	printf("输入b纵坐标y=");
	scanf("%f",&b.y);
	printf("a-b直线的斜率是%.2f\n",(a.y-b.y)/(a.x-b.x));
	b=a;
	if(fabs(a.x-b.x)<1e-6)
		printf("两点x轴坐标相同\n");
	return 0;
}
