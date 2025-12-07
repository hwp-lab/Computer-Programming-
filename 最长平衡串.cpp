#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i,j,t=0;
	int a,b;
	scanf("%d",&n);
	char*s;
	s=(char*)malloc((n+1)*sizeof(char));
	if(s==NULL)
	{
		printf("no enough memory\n");
		exit(1);
	}
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		a=0;
		b=0;
		for(j=i;j<n;j++)
		{
			if(s[j]=='1')
				a++;
			else
				b++;
			if(a==b&&t<j-i+1)
				t=j-i+1;	
		}
	}
	printf("%d",t);
	free(s);
	return 0;
}
