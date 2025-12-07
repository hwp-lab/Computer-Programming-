#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char a[10]={'q','w','e','r','t','y','u','i','o','p'};
	printf("Enter length:");
	scanf("%d",&l);
	char b[l+1];
	for(i=0;i<l;i++)
	{
		memset(b,a[i],1);
		b[l]=0;
	}
	printf("b=%s\n",b);
	return 0;
}
