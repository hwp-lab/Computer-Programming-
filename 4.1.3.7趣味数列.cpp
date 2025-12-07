#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char**figure(int n);
char*cal(char*p);

int main()
{
	int n,i;
	printf("n=");
	scanf("%d",&n);
	char**p=figure(n);//
	printf("%s\n",p[n-1]);
	
	for(i=0;i<n;i++)
		free(p[i]);//
	free(p);
	
	return 0;
}

char**figure(int n)
{
	char**p=(char**)malloc(n*sizeof(char*));
	if(p==NULL)
	{
		printf("no enough memory\n");
		exit(1);
	}
	
	int i;
	for(i=0;i<n;i++)
	{
		p[i]=(char*)malloc(2*i+1);//不用再char*p[i]了。。。
		if(p[i]==NULL)
		{
			printf("no enough memory\n");
			exit(1);
		}
		if(i==0)
			strcpy(p[i],"1");//不能直接赋值
		else
		{
			char*t=cal(p[i-1]);
			free(p[i]);//释放旧字符串的内存，更新指向新字符串
			p[i]=t;//否则原本指针被覆盖，内存无法释放
		}
	}
	return p;		
}
char *cal(char*p)
{
	int i,j=0;
	int count=1;
	int l=strlen(p);
	char*q=(char*)malloc(2*l+1);//
	if(q==NULL)
	{
		printf("no enough memory\n");
		exit(1);
	}
	
	for(i=0;i<l;i++)
	{
		if(i<l-1&&p[i]==p[i+1])
			count++;
		else
		{
			q[j]=count+'0';
			j++;
			q[j]=p[i];
			j++;
			count=1;
		}
	}
	q[j]='\0';
	return q;
}
