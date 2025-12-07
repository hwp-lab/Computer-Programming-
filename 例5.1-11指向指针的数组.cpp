#include<stdio.h>
int main()
{
	
	char *pname[13]={"input error","January","February","March",
		"April","May","June","July","August","September","October","November","December"};
	int i;
	char **p;
	p=pname;
	for(i=1;i<13;i++)
	{
		p++;
		printf("%s\n",*p);
	}
	return 0;
}
