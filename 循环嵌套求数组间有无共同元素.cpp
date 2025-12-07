#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[6]={4,5,6,7,8,9};
	int i,j,t=0;
	for(i=1;i<=5;i++)
		for(j=1;j<=6;j++)
			if(a[i]==b[j]) t=1;
	if(t==1) printf("a、b中有相同元素");
	else printf("a、b中无相同元素");
	return 0;
}
