#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0};
	int i,word=0,num=0;
	printf("enter words:");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==' ') word=0;
		else if(word==0)
		{
			word=1;
			num=num+1;
		}
	}
	printf("there are %d words in this line",num);
}
