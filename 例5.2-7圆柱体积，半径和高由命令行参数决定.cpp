#include<stdio.h>
#include<stdlib.h>
#define pi 3.1415926535
int main(int argc,char *argv[])
{
	double v,r,h;
	if(argc!=3)
	{
		printf("error\n");
	}
	r=atof(argv[1]);
	h=atof(argv[2]);
	v=pi*r*r*h;
	printf("V=%lf",v);
	return 0;
}
