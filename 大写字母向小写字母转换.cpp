#include<stdio.h>
int main()
{
	char ch,i;
	for(i=0;i<5;i++)
	{
		ch=getchar();
		if(ch>='A'&&ch<='Z')
			putchar(ch-'A'+'a');
		else
			putchar(ch);
	}
	return 0;
}
