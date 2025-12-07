#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,l,n=0;
	char s[]="such a ridiculous but funny activity";
	char word[20];
	char tempt[20]={0};
	printf("%s\n",s);
	printf("input:");
	scanf("%s",word);
	l=strlen(word);
	while(s[i]!='\0')
	{
		strncpy(tempt,s+i,l);
		if(strcmp(tempt,word)==0)
		{
			n++;
			i=i+l;
		}
		i++;//按道理是测单词数，所以再加一个空格吧
	}
	printf("occurrance number is %d\n",n);
	return 0;
}
