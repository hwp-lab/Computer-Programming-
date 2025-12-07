#include<stdio.h>
char*mystrcpy(char*s,char*t);
int main()
{
	char *s="keepcalm";
	char t[10];
	mystrcpy(t,s);
	printf("%s",t);
	return 0;
}
char *mystrcpy(char*t,char*s)
{
	char*d=t;
	while((*t++=*s++));
	return d;
}
