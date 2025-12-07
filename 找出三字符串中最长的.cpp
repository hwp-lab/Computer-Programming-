#include<stdio.h>
#include<string.h>
int main()
{
	char a[3][20];
	char b[20];
	int i;
	printf("input three strings:\n");
	for(i=0;i<3;i++)
		gets(a[i]);
	if(strcmp(a[0],a[1])>0)
		strcpy(b,a[0]);
	else
		strcpy(b,a[1]);
	if(strcmp(a[2],b)>0)
		strcpy(b,a[2]);
	printf("the longest string is %s",b);
	return 0;
}
