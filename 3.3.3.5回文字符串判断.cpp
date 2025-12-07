#include<stdio.h>
#include<string.h>
int palindrome(char a[],int n);
int i;
int main()
{
	char a[20];
	int n,t;
	printf("input a string:");
	scanf("%s",a);
	n=strlen(a);
	t=palindrome(a,n);
	if(t)
		printf("%s is a palindrome\n",a);
	else
		printf("%s is not a palindrome\n",a);
	return 0;
}
int palindrome(char a[],int n)
{
	if(i>=n-1-i)
		return 1;
	if(a[i]==a[n-1-i])
	{
		i++;
		return palindrome(a,n);
	}
	return 0;
}
