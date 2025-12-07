#include <stdio.h>
int main()
{
	char c;
	while(c)
	{
		c=getchar();
		c=(c>='A'&&c<='Z')?c+32:c;
		putchar(c);
	}
return 0;
}
