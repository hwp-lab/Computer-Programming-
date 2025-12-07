#include<stdio.h>
int main()
{
	int expense;
	float ex,d;
	for(;;)
	{	
	printf("Your expense is:");
	scanf("%d",&expense);
	if(expense>0)
	{
		switch(expense/50)
		{
		case 0: d=0;break;
		case 1: 
		case 2: d=0.03;break;
		case 3: 
		case 4: 
		case 5: d=0.05;break;
		case 6: 
		case 7: 
		case 8: 
		case 9: d=0.08;break;
		default:d=0.12;
		}
	ex=expense*(1-d);
	printf("Your discount is:%.2f\n",d);
	printf("Your final expense is:%.2f",ex);
	}
	else printf("Error");
	return 0;
	}
}
