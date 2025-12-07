#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1;
	double t=1,sum=1;
	while(1/t>=1e-6)
	{
		sign=-sign;
		t=t+2;
		sum=sum+sign/t;
	}
	printf("¦Ð=%f",4*sum);
	return 0;
}
