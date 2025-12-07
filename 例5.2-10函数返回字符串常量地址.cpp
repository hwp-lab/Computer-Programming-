#include<stdio.h>
char*days(int n);
int main()
{
	int n;
	char*a;
	printf("n=");
	scanf("%d",&n);
	a=days(n);
	printf("%s\n",a);
	return 0;
}
char*days(int n)
{
	char *day[]={"","monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	if(n>0&&n<8)
		return day[n];
	else
	{
		printf("error");
		return NULL;
	}
}
