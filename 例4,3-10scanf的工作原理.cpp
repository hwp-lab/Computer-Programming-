#include<stdio.h>
int main()
{
	int a,f;
	char b;
	float c;
	double d;
	char e[10];
	f=scanf("%d %c %f %lf %s",&a,&b,&c,&d,e);
	printf("%d %d %c %f %lf %s",f,a,b,c,d,e);
	return 0;
}
