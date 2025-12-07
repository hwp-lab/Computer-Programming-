#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[6]={4,5,6,7,8,9};
	int i,j,t=0;
	for(i=0;i<5;i++)
		for(j=0;j<6;j++)
			if(a[i]==b[j]) {t=1; printf("a,b中有相同元素a[%d],b[%d]\n",i,j);}
	if(t!=1) printf("a、b中无相同元素");
	return 0;
}
