#include<stdio.h>
int main()
{
	char c;
	while(c)
	{
		c=getchar();
		if(c>='a'&&c<='z')
			putchar(c-'a'+'A');
		else
			putchar(c);
	}
return 0;
}
