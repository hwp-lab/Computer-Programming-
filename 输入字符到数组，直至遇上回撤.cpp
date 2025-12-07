#include<stdio.h>
int main()
{
	int i;
	char s[20],c;//能输出超过二十个字符可能是占了别的变量的内存空间。。。
	printf("输入字符串；");
	for(i=1;'c'!='\n';i++)
	{
		c=getchar();
		s[i]=c;
		putchar(s[i]);
	}
	return 0;
}
