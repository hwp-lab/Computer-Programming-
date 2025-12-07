#include<stdio.h>
int main()
{
	int i,j,k;
	float a=0,b=0,c=0;
	for(i=1;i<=100;i++)
		a=a+1.0/i;
	printf("for: sum is %6.2f\n",a);
	return 0;
	while(j<=100)
	{
		j=1;
		b=b+1.0/j;
		j++;
	}
	printf("while: sum is %6.2f\n",b);
	do
	{
		k=1;
		c=c+1.0/k;
		k++;
	}	
	while(k<=101);
	printf("do while: sum is %6.2\n",c);
	return 0;
}
