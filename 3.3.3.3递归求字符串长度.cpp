#include<stdio.h>
int recursion(char a[],int n);
int non(char a[]);
int main()
{
	char a[20];
	printf("input a string:");
	scanf("%s",a);
	int m,n;
	m=recursion(a,0);
	n=non(a);
	printf("recursion:%d\nnon-recursion:%d\n",m,n);
	return 0;
}
int recursion(char a[],int n)
{
	int l=0;
	if(a[n]!='\0')
		l=1+recursion(a,n+1);
	else 
		l=0;
	return l;
}
int non(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++);//加分号，否则return相当于在循环里面。。。
	return i;
}
