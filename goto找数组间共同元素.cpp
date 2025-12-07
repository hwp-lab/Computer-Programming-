#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[6]={4,5,6,7,8,9};
	int i,j;
	for(i=1;i<=5;i++)
		for(j=1;j<=6;j++)
			if(a[i]==b[j]) goto found;
	printf("a、b中无相同元素");
	found:
	printf("a、b中有相同元素a[%d],b[%d]",i,j);
	return 0;
}
