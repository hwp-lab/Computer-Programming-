#include<stdio.h>
#include<string.h>
void invert(char a[],int);
int main()
{
	int n;
	char a[100]={0};
	printf("input a string:");
	scanf("%s",a);
	n=strlen(a);
	invert(a,n);
	printf("%s",a);
	return 0;
}
void invert(char a[],int n)
{
	int i;
	char t;
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
}
