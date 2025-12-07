#include<stdio.h>
#include<math.h>
int main()
{
	float a[8]={3.2,2.3,2.2,2.4,2.1,3.0,2.9,2.8};
	float sum=0,ave,var,MSD;
	int i;
	for(i=0;i<8;i++)
		sum=sum+a[i];
	ave=sum/8;
	sum=0;
	for(i=0;i<8;i++)
		sum=sum+(a[i]-ave)*(a[i]-ave);
	var=sum/7;
	MSD=sqrt(var);
	printf("ave=%.2f\n",ave);
	printf("var=%.2f\n",var);
	printf("MSD=%.2f\n",MSD);
	return 0;
}
