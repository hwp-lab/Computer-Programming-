#include<stdio.h>
int main()
{
	char s[20],i,c;
	for(i=0;(i<20)&&(c=getchar()!='\n');i++)
	s[i]=c;
	printf("%s",s);
	return 0;
}
