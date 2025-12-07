#include<stdio.h>
int mystrcmp(char*s,char*t);
int main()
{
	int diff;
	char *s1="abcd";
	char s2[20]="abce";
	diff=mystrcmp(s1,s2);
	printf("%d",diff);
	return 0;
}
int mystrcmp(char*s,char*t)
{
	while(*s&&*s==*t)
	{
		*s++;
		*t++;
	}
	return *s-*t;	
}
