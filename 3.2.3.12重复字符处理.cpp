#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char a[11]={0};
	printf("input characters:");
	scanf("%s",a);
	char b[11]={0};
	int c[10]={1,1,1,1,1,1,1,1,1,1};
	for(i=0;i<10;i++)
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
		if(i>=(strlen(a)-1))
			break;
	}
	for(i=0;i<=j;i++)
	{
		if(c[i]!=1)
			printf("%d",c[i]);
		printf("%c",b[i]);
	}
	return 0;
}
