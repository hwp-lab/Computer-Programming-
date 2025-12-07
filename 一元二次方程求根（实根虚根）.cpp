#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float q;
	float x,x1,x2;
	for(;;)
	{
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	q=b*b-4*a*c;
	if(a==0)
		{
		printf("x=%.2f\n",-c/b);
		}
	else if(b*b==4*a*c)
		{
		printf("x=%.2f\n",-b/2*a);
		}
	else
		{
		if(q>1e-6)
			{
			printf("x1=%.2f\n",(-b+sqrt(q))/2*a);
			printf("x2=%.2f\n",(-b-sqrt(q))/2*a);
			}
		else
			{
			printf("x1=(%.2f+%.2fi)/%.2f\n",-b,sqrt(-q),2*a);
			printf("x2=(%.2f+%.2fi)/%.2f\n",-b,sqrt(-q),2*a);
			}
		}
	}
return 0;	
}
