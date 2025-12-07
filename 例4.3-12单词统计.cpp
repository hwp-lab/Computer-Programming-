#include<stdio.h>
#include<string.h>
#define in 1
#define out 0
int main()
{
	char c,s[80];
	int i,num=0;
	int st=0;
	printf("input a string:");
	gets(s);
	for(i=0;(c=s[i])!='\0';i++)
	{
		if(c==' '||c=='\t')
			st=out;
		else if(st==0)
		{
			num++;
			st=in;
		}
	}
	printf("number is %d",num);
	return 0;
}
