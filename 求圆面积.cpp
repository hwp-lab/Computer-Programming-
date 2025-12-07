#include<stdio.h>
double area(float);
double power(float,int);
int main()
{
	float r;
	printf("input r:");
	scanf("%f",&r);
	printf("%.3f",area(r));
	return 0;
}
double area(float r)
{
	return(3.14*power(r,2));
}
double power(float x,int n)
{
	int i;
	float y=1;
	for(i=1;i<=n;i++)
		y=y*x;
	return y;
}
