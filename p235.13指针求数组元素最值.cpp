#include<stdio.h>
void maxmin(int*s,int n,int*max,int*min);
int main()
{
	int *max,*min;
	int s[10]={13,54,34,90,45,32,54,56,22,11};
	maxmin(s,10,max,min);
	printf("max is %d\nmin is %d\n",*max,*min);
	return 0;
}
void maxmin(int*s,int n,int*max,int*min)
{
	int i;
	*max=*min=s[0];
	for(i=0;i<n;i++)
	{
		if(s[i]>*max)
			*max=s[i];
		if(s[i]<*min)
			*min=s[i];
	}
}
