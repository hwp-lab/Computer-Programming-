#include<stdio.h>//挨个画弄不出来。放弃。。。
#include<stdlib.h>
int partition(int*s,int low,int high);
void qs(int*s,int low,int high);
int main()
{
	int s[9]={9,3,5,1,4,6,7,2,8};
	qs(s,0,8);
	for(int i=0;i<9;i++)
		printf("%d",s[i]);
	return 0;
}
void qs(int*s,int low,int high)
{
	int p;
	for(int i=low;i<=high;i++)
		printf("%d ",s[i]);
	printf("\n");
	if(low>=high)
		return;
	p=partition(s,low,high);
	qs(s,low,p-1);
	qs(s,p+1,high);
}
int partition(int*s,int low,int high)
{
	int p=s[low];
	int t;
	while(low<high)
	{
		while(s[high]>=p&&low<high)//防止越界！！！
			high--;
		t=s[low];
		s[low]=s[high];
		s[high]=t;
		while(s[low]<=p&&low<high)
			low++;
		t=s[low];
		s[low]=s[high];
		s[high]=t;
	}
	return low;
}
