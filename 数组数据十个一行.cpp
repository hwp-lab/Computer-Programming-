#include<stdio.h>
int main()
{
	int i;
	int data[15];
	for(i=0;i<15;i++)
	{
		scanf("%d",&data[i]);
		if(data[i]%10==9||data[i]==14)
			printf("%d\n",data[i]);
		else
			printf(" %d",data[i]);	
	}
return 0;
}
