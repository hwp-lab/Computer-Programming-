#include<stdio.h>
int main()
{
	float data[4];
	float sum=0,ave;
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%f",&data[i]);
		sum=sum+data[i];
	}
	ave=sum/4;
	printf("平均值是%.2f",ave);
	return 0;
}
