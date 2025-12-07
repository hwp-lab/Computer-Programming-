#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int *s,int n);
int main()
{
	int n,m;
	int i;
	printf("n=");
	scanf("%d",&n);
	int*s=(int*)malloc(n*sizeof(int));//s[n]的话兼容性不行。。。
	if(s==NULL)//检验一下吧
	{
		printf("not enough memory");
		return 1;
	}
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	m=max(s,n);
	printf("%d\n",m);
	free(s);
	return 0;
}
max(int*s,int n)
{
	int i,j=0;
	int sum=0;
	int maxsum,maxindex=0;
	int**p=(int**)malloc((n/3+(n%3)>0?1:0)*sizeof(int*));
	if(p==NULL)
	{
		printf("not enough memory");
		exit (1);
	}
	for(i=0;i<n-(n%3);i+=3)//避免越界访问数组s
	{
		p[j]=(int*)malloc(4*sizeof(int));
		if(p[j]==NULL)
		{
			printf("not enough memory");
			exit (1);
		}
		p[j][0]=s[i];
		p[j][1]=s[i+1];
		p[j][2]=s[i+2];
		p[j][3]=s[i]+s[i+1]+s[i+2];
		//printf("%d\n",p[j][3]);
		j++;
	}
	if(n%3>0)
	{
		int r=n%3;
		p[j]=(int*)malloc(r*sizeof(int));
		if(p[j]==NULL)
		{
			printf("not enough memory");
			exit (1);
		}
		for(i=n-r;i<n;i++)
			p[j][i-(n-r)]=s[i];
		for(i=0;i<r;i++)
			sum=p[j][i]+sum;
		//printf("sum:%d\n",sum);
	}
	maxsum=p[0][3];
	//printf("maxsum:%d\n",maxsum);
	for(i=0;i<j;i++)//注意,整除的情况下j-1就到头了；有余数的情况下还有j
		if(p[i][3]>maxsum)
		{
			maxsum=p[i][3];
			//printf("i=%d,j=%d\n",i,j);
			//printf("maxsum:%d\n",maxsum);
			maxindex=i;
			//printf("maxindex:%d\n",maxindex);
		}
	if(n%3>0)
		if(sum>maxsum)
		{
			maxsum=sum;
			maxindex=j;
			//printf("maxindex:%d\n",maxindex);
		}
	for(i=0;i<j;i++)
		free(p[i]);
	free(p);
	return maxindex*3;
}
