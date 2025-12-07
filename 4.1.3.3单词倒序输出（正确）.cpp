#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*函数声明*/
int fn(char *s);
char** reverse(char*s,int n);
void print(char **p,int n);

/*主函数*/
int main()
{
	char s[50];
	int n;
	printf("input a sentense:");
	fgets(s,sizeof(s),stdin);
	if(s[strlen(s)-1]=='\n')
		s[strlen(s)-1]='\0';
	n=fn(s);
	char**p;
	p=reverse(s,n);
	print(p,n);
	for(int i=0;i<n;i++)
		free(p[i]);
	free(p);
	return 0;
}

/*单词个数函数*/
int fn(char *s)
{
	int n=0;
	while(*s!='\0')
	{
		while((!(*s>='a'&&*s<='z')&&!(*s>='A'&&*s<='Z')) && *s!='\0')
			s++;//while循环也可能造成*s='\0'
		if(*s!='\0')
		{
			n++;
			while(((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z')))
				s++;
		}
	}
	return n;
}

/*倒序函数*/
char** reverse(char*s,int n)
{
	char**p=(char**)malloc(n*sizeof(char*));
	int wstart=-1;
	int wcount=0;
	int i;
	int l=strlen(s);
	for(i=0;i<=l;i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) &&
			(i==0 || !((s[i-1]>='a'&&s[i-1]<='z')||(s[i-1]>='A'&&s[i-1]<='Z'))))
			wstart=i;
		if((!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='A'&&s[i]<='Z')) || s[i]=='\0')
		{
			if(wstart!=-1)
			{
				p[wcount]=(char*)malloc(i-wstart+1);
				strncpy(p[wcount],s+wstart,i-wstart);
				p[wcount][i-wstart]='\0';
				wcount++;
				wstart=-1;
			}
		}
	}
	char**r=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		r[i]=(char*)malloc(strlen(p[n-i-1])+1);
		strcpy(r[i],p[n-i-1]);
		free(p[n-i-1]);
	}
	free(p);
	return r;
}

/*输出函数*/
void print(char**p,int n)
{
	for(int i=0;i<n;i++) {
		printf("%s ",p[i]);
	}
	printf("\n");
}
