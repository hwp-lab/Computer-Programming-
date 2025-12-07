#include<stdio.h>
int main()
{
	int i=1,sum,summ;
	sum=summ=0;
	printf("i=");
	scanf("%d",&i);
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("while:sum=%d\n",sum);
	do
		{
			summ=summ+i;
			i++;
		}
		while(i<=100);
		printf("do while:sum=%d\n",summ);
	return 0;
}
