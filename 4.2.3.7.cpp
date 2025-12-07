#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int right(char*s);
int main()
{
	char s[100]={0};
	int t;
	fgets(s,sizeof(s),stdin);
	t=right(s);
	if(t)
		printf("RIGHT");
	else
		printf("FALSE");
	return 0;
}
int right(char*s)
{
	int m=0,n=0;
	int l;
	int i;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='(')
			m++;
		else if(s[i]==')')
			n++;
		if(m<n)
			return 0;
	}
	if(m!=n)
		return 0;
	return 1;
}
