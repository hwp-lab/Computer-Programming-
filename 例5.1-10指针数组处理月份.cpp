#include<stdio.h>
int main()
{
	
	char *pname[13]={"input error","January","February","March",
		"April","May","June","July","August","September","October","November","December"};
	int n;
	scanf("%d",&n);
	printf("%s",(n>=1&&n<=12)?pname[n]:pname[0]);
	return 0;
}
