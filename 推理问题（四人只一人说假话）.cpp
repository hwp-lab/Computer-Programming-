#include<stdio.h>
int main()
{
	int k,sum,a=1;
	char theone;
	for(k=0;k<4;k++)
	{
		theone='A'+k;
		sum=(theone!='A')+(theone=='C')+(theone=='D')+(theone!='D');
		if(sum==3)
		{
			printf("theone is %c",theone);
			a=0;
			break;
		}
	}
	if(a) printf("no found");
	return 0;
}
