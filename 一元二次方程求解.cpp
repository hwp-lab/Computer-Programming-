#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,t;
	float x1,x2;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	t=b*b-4*a*c;
	if(t>=0&&a!=0)
	{
		x1=(-b+sqrt(t))/2*a;
		x2=(-b-sqrt(t))/2*a;
		printf("x1=%6.2f\nx2=%6.2f",x1,x2);
	
	}
	if(a==0)
		printf("这不是一元二次方程");
	if(t<0)
		printf("该方程无解");
	return 0;
}
