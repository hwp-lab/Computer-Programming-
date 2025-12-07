#include<stdio.h>
int main()
{
	int year,l;
	for(;;)
	{
	printf("year is ");
	scanf("%d",&year);
	if(year%4!=0)
		l=0;
	else if(year%400==0)
		l=1;
	else if(year%100==0)
		l=0;
	else
		l=1;
	if(l) printf("%d is\n",year);
	else printf("%d is not\n",year);
	}
	return 0;
}
