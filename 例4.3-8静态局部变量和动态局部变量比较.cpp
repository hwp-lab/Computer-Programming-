#include<stdio.h>
int s=7;
void vs()
{
	int a=8;
	static int s;
	printf("a=%d ",++a);
	printf("s=%d ",++s);
}
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		vs();
		printf("main:s=%d\n",s);	
	}
	return 0;
}
