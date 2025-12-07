#include<stdio.h>
char*mystrcat(char*s,char*t);
int main()
{
	char *s="keepcalm";
	char t[20]="keepcool";
	mystrcat(t,s);
	printf("%s",t);
	return 0;
}
char *mystrcat(char*t,char*s)
{
	char*d=t;
	while(*t)//*t++的话t会多跑一次。。。
		t++;
	while((*t++=*s++));
	return d;
}
