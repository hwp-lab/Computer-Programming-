#include<stdio.h>
int main()
{
	int i;
	int data[n];
	for(i=0;i<n;i++)
		printf("%6d%c",data[i],(i%10==9||i==n-1)?'\n':'');
	return 0;
}
