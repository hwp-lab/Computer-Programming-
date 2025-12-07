#include<stdio.h>
int partition(int*s,int low,int high);
void sortquick(int*s,int low,int high)
{
	int p;
	if(low>=high)
		return;
	p=partition(s,low,high);
	//printf("%d\n",p);µ÷ÊÔÓÃµÄ
	sortquick(s,low,p-1);
	sortquick(s,p+1,high);
}
int partition(int*s,int low,int high)
{
	int p=s[low];
	int t;
	while(low<high)
	{
		while(s[high]>p&&low<high)
			high--;
		t=s[low];
		s[low]=s[high];
		s[high]=t;
		while(s[low]<p&&low<high)
			low++;
		t=s[low];
		s[low]=s[high];
		s[high]=t;
	}
	return low;
}
int main()
{
	int s[10]={7,9,8,6,0,99,5,22,7,89};
	int i;
	for(i=0;i<10;i++)
	{
		//s[i]=-6*i+1;
		printf("%d ",s[i]);
	}
	printf("\n");
	sortquick(s,0,9);
	for(i=0;i<10;i++)
		printf("%d ",s[i]);
	return 0;
}
