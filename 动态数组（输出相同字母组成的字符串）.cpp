#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	printf("Enter length:");
	scanf("%d",&l);
	char b[l+1];
	memset(b,'a',l);
	b[l]=0;
	printf("b=%s\n",b);
	return 0;
}
