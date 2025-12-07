#include<stdio.h>
int main()
{
	int a;
	float b,r,t;
	for(;;)
	{
	printf("输入年收入；");
	scanf("%d",&a);
	t=a/1000.0;
	if(t>=0&&t<=36) {r=0.03; b=r*t;}
    else if(t>36&&t<=144) {r=0.1; b=r*t-2.52;}
	else if(t>144&&t<=300) {r=0.2; b=r*t-16.920;} 
	else if(t>300&&t<=420) {r=0.25; b=r*t-31.920;}
	else if(t>420&&t<=660) {r=0.3; b=r*t-52.920;}
	else if(t>660&&t<=960) {r=0.35; b=r*t-85.920;}
	else if(t>960) {r=0.45; b=r*t-181.920;}
	else break;
	printf("r=%.2f\n",r);
	printf("t=%.2f\n",t);
	printf("b=%.2f\n",b);
	printf("应交个人所得税；%.0f\n",1000*b);
	}
	return 0;
}
