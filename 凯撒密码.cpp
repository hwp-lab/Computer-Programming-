#include<stdio.h>
int main()
{
	for(;;)
	{
	char n;
	printf("输入一串数组：");
	while((n=getchar())!='\n')
	{
		if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
		{
			n=n+4;
			if((n>'z'&&n<='z'+4)||(n>'Z'&&n<='Z'+4))
				n=n-26;
		}
		printf("%c",n);
	}
		printf("\n");
	}
	return 0;
}
