#include<stdio.h>
int main()
{
	int a,b;
	float x,y;
	printf("(1)3.5+1/2+56%10=%.1f\n",3.5+1/2+56%10);
	/*第二题*/
	printf("(2)a=");
	scanf("%d",&a);
	printf(" a++*1/3=%d\n",a++*1/3);
	/*第三题*/
	printf("(3)a=");
	scanf("%d",&a);
	printf("x=");
	scanf("%f",&x);
	printf("y=");
	scanf("%f",&y);
	printf("x+a%3*(int)(x+y)%2/4=%1.f\n",x+a%3*(int)(x+y)%2/4);
	/*第四题*/
	printf("(4)a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("x=");
	scanf("%f",&x);
	printf("y=");
	scanf("%f",&y);
	printf("(float)(a+b)/2+(int)x%(int)y=%.1f",(float)(a+b)/2+(int)x%(int)y);
}
