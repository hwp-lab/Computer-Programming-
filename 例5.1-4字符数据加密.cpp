#include<stdio.h>
int main()
{
	char s[4]={'C','O','D','E'};
	char sc[4];
	int i=0,of=5;
	char *p=s;
	printf("&s[0]=%p,s=%p\n",&s[0],s);
	for(i=0;i<4;i++)
	{
		printf("&p=%p,p=%p,*p=%c\n",&p,p,*p);
		sc[i]=*p+of+i;
		printf("明文是：%c 密文是：%c\n",s[i],sc[i]);
		p++;
	}
	putchar('\n');
	return 0;
}
