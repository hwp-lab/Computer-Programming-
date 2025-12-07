#include<stdio.h>
int main()
{
	int i,j,t=0;
	for(i=1;i<=1000;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
			{
				t=1;
				break;
			}	
		if(t==0)
			printf("%d\n",i);
		t=0;
	}
}
