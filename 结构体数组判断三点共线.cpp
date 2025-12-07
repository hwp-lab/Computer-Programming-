#include<stdio.h>
#include<math.h>
int main()
{
	struct point
	{
		float x;
		float y;
	}a[3]={{1.2,2.6},{2.4,3.8},{3.6,5}};
	float b,c;
	b=(a[0].y-a[1].y)/(a[0].x-a[1].x);
	c=(a[2].y-a[1].y)/(a[2].x-a[1].x);
	if(fabs(b-c)<1e-6)
		printf("三点在一条直线");
	return 0;
}
