#include<stdio.h>
int main()
{
	int m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	char w[7][10]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	int month=0,week,day;
	printf("input month&day\n");
	scanf("%d%d",&month,&day);
	int i;
	if(month<1||month>12) printf("error");
	else
	{
		for(i=1;i<month;i++)
			day=day+m[i];
		week=day%7;
		printf("it's %dth day in 2024\n",day);
		printf("this day is %s",w[week]);
	}
	return 0;
}
