#include<stdio.h>
int main()
{
	float data[8]={1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9};
	float sum=0,max=0,ave;
	int i;
	for(i=0;i<8;i++)
	{
		sum=sum+data[i];
		if(max>data[i])max=max;
		else max=data[i];
	}
	ave=sum/8;
	printf("ave is %.2f\n",ave);
	printf("max is %.1f",max);
	return 0;
}
