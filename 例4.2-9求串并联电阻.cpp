#include<stdio.h>
float series(float a,float b,float c);
float parallel(float,float,float);
int main()
{
	float a,b,c;
	printf("input three r:");
	scanf("%f %f %f",&a,&b,&c);
	printf("series is %.2f\n",series(a,b,c));
	printf("parallel is %.2f\n",parallel(a,b,c));
	return 0;
}
float series(float a,float b,float c)
{
	return a+b+c;
}
float parallel(float a,float b,float c)
{
	float t;
	t=1/a+1/b+1/c;
	return 1/t;
}


