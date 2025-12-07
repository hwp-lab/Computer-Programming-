#include<stdio.h>
#include<string.h>
#define n 12
int main()
{
	char a[n]="hwp-hwp";
	char b[n]={0};
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("input password\n");
		scanf("%s",b);
		for(j=0;j<n&&a[j]==b[j];j++);
		if(j==n)
		{
			printf("welcome");
			return 1;
		}
		else
			printf("error\n");
	}
	printf("fail to enter\n");
	return 0;
}
