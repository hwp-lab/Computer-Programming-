#include<stdio.h>
float myfabs(float x);
int main()
{
	float x;
	printf("input a number:");
	scanf("%f",&x);
	printf("|x|=%f",myfabs(x));
	return 0;
}
float myfabs(float x)
{
	return(x>=0?x:-x);
}
