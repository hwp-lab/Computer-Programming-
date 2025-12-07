#include<stdio.h>
int f(int a)
{
	int b=0;
	static int c=3;
	b=b+1;
	c=c+1;
	printf("a=%d,b=%d,c=%d,",a,b,c);
	return a+b+c;
}
int main()
{
	int a=2,i;
	for(i=0;i<3;i++)
		printf("a+b+c=%d\n",f(a));
	return 0;
}
