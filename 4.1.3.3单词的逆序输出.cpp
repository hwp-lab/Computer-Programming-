#include<stdio.h>
/*函数声明*/
int fn(char *s);
char** reverse(char*s,int n);
void print(char *s,int n);
/*主函数*/
int main()
{
	char s[50];
	int n;
	printf("input a sentense:");
	scanf("%s",s);
	n=fn(s);
	char(*p)[n];
	p=reverse(s,n);
	print(p[],n);
	return 0;
}
/*单词个数函数*/
int fn(char *s)
{
	int n=1;
	while(s)
	{
		if(('s'>='a'&&'s'<='z')||('s'>='A'&&'s'<='Z'))
			s++;
		else
			n++;
	}
	return n;
}
/*倒序函数*/
char** reverse(char*s,int n)
{
	int i,j;
	char(*p)[n];
	
}
/*输出函数*/
