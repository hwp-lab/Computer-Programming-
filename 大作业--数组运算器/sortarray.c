#include<stdlib.h>
#include<stdio.h>
/*冒泡排序*/
void sortbubble(int*s,int y)
{
	int i,j,t;
	for(i=0;i<y-1;i++)
		for(j=0;j<y-1-i;j++)
			if(s[j]>s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
}
/*选择排序*/
void sortselection(int*s,int y)
{
	int i,j,t,k;
	for(i=0;i<y-1;i++)
	{
		k=i;
		for(j=i+1;j<y;j++)//又是i,j不分的bug
			if(s[k]>s[j])//s[j]更小的话，才把k换成j啊
				k=j;
		if(k!=i)
		{
			t=s[i];
			s[i]=s[k];
			s[k]=t;
		}
	}
}
void sortinsertion(int*s,int y)//还能怎么插，好不容易懂了。。。
{
	int i, j;
	for (i = 0; i < y; i++)
	{
		int k= s[i];
		j = i-1;
		while (j>=0&&s[j]>k)
		{
			s[j + 1] = s[j];
			j--;
		}
		s[j+1] =k;
	}
}
void sortreverse(int*s,int y)
{
	int i,t;
	for(i=0;i<(y-1)/2;i++)
	{
		t=s[i];
		s[i]=s[y-1-i];
		s[y-1-i]=t;
	}
}
/*快速排序*///等差可以，别的不行，太牛马了
int partition(int*s,int low,int high);
void sortquick(int*s,int low,int high)
{
	int p;
	if(low>=high)
		return;
	p=partition(s,low,high);
	//printf("%d\n",p);//调试用的
	sortquick(s,low,p-1);
	sortquick(s,p+1,high);
}
int partition(int*s,int low,int high)//有相等元素的时候开始死循环...
{
	int p=s[low];
	while(low<high)
	{
		while(s[high]>=p&&low<high)
			high--;
		s[low]=s[high];
		while(s[low]<=p&&low<high)
			low++;
		s[high]=s[low];
	}
	s[low]=p;
	return low;
}
/*归并排序*/
void merge(int*s,int start,int mid,int end);
void sortmerge(int*s,int start,int end)
{
	int mid=(start+end)/2;
	if(start>=end)
		return;
	sortmerge(s,start,mid);
	sortmerge(s,mid+1,end);
	merge(s,start,mid,end);
}
void merge(int*s,int start,int mid,int end)//二路归并排序
{
	int*t=(int*)malloc((end-start+1)*sizeof(int));
	int i=start,j=mid+1;
	int k=0;
	while(i<=mid&&j<=end)
	{
		if(s[i]<s[j])
		{
			t[k]=s[i];
			k++;
			i++;
		}
		else
		{
			t[k]=s[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		t[k]=s[i];
		k++;
		i++;
	}
	while(j<=end)
	{
		t[k]=s[j];
		k++;
		j++;
	}
	for(i=0;i<k;i++)
		s[start+i]=t[i];
	free(t);
}
/*交换排序*/
void sortfool(int*s,int y)
{
	int i,j,t;
	for(i=0;i<y-1;i++)
		for(j=i+1;j<y;j++)
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
}
