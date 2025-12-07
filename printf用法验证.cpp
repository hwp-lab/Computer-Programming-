#include<stdio.h>
int main()
{
	int a=425;
	float b=425.425;
	printf("a=%+6d\n",a);
	printf("%c\n",a);
	printf("b=%7.4G\n",b);
	printf("b=%+7.4G\n",b);
	printf("%6.3s\n","hello");
	printf("%-6.3s\n","hello");
	printf("%+6.3s\n","hello");
	printf("%#08x\n",a);
	printf("%8.4f%%\n",b);
	return 0;
}
