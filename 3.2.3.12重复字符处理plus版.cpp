#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	int n;
	char a[100]={0};
	printf("input characters:");
	scanf("%s",a);
	n=strlen(a);
	char b[n]={0};
	int c[n];
	for(i=0;i<n;i++)
		c[i]=1;
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			if(i==0||(i>=1&&a[i]!=a[i-1]))
			{
				b[j]=a[i];
				j++;
			}
			else if(i>0&&a[i]==a[i-1])
				j=j+1;
		}
		else
		{
			b[j]=a[i];
			c[j]++;
		}
	}
	for(i=0;i<=j;i++)
	{
		if(c[i]!=1)
			printf("%d",c[i]);
		printf("%c",b[i]);
	}
	return 0;
}
