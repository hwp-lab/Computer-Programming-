#include<stdio.h>
int main()
{
	float data[8];
	int i,j=0;
	float sum=0,ave;
	for(i=0;i<8;i++)
	{
		scanf("%f",&data[i]);
		if(data[i]>0)
		{
			sum=sum+data[i];
			j=j+1;
		}
		if(data[i]<=0)
		{
			sum=sum;
			j=j;
		}
	}
	ave=sum/j;
	printf("ave is %.2f",ave);
	return 0;
}
