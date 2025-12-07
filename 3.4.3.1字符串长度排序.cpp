#include<stdio.h>

struct str
{
	char st[20];
	int len;
};
void getstring(char a[]);
int mystrlen(char a[]);
void sort(struct str s[],int);
void print(struct str s[],int);
int main()
{
	int i,n;	
	printf("×Ö·û´®¸öÊý£º");
	scanf("%d",&n);
	struct str s[n];
	for(i=0;i<n;i++)
	{
		getstring(s[i].st);
		s[i].len=mystrlen(s[i].st);
	}
	sort(s,n);
	print(s,n);
	return 0;
}
void getstring(char a[])
{
	scanf("%s",a);	
}
int mystrlen(char a[])
{
	return strlen(a);
}
void sort(struct str s[],int n)
{
	int i,j;
	struct str t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(s[i].len>s[j].len)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
	
}
void print(struct str s[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s %d\n",s[i].st,s[i].len);
}
