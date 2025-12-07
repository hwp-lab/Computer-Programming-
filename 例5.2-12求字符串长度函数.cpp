#include<stdio.h>
int mystrlen(char *s);
int main()
{
	char *s1="c lamguage";
	char s2[20]="USTC";
	printf("length:%d\n",mystrlen(s1));
	printf("length:%d\n",mystrlen(s2));
	return 0;
}
int mystrlen(char *s)
{
	int l=0;
	while(*s++)//看*s的值是否为空哎
		l++;
	return l;
}
