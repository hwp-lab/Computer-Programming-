#include<stdio.h>
#include<string.h>
char*find(char*s,char*t);//s是char
int main()
{
	char*s="wertyuioplkjhg azxcbnfgggevy";
	char*t="azx";
	char*a;
	a=find(s,t);
	if(a==NULL)
		printf("no found\n");
	else
		printf("%s",a);//返回指向字符串首字符的指针
	return 0;
}
char* find(char*s,char*t)
{
	int i=0,j=0;
	int m=strlen(s);
	int n=strlen(t);
	for(i=0;i<m-n;i++)
	{
		for(j=0;j<n;j++)
			if(s[i+j]!=t[j])
				break;
		if(j==n)
			return s+i;
	}
	return NULL;
}
