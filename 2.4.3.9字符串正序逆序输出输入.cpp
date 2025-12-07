#include<stdio.h>
int main()
{
	int i,j,k;
	char a[100];
	for(j=0;j<3;j++)
	{
		printf("输入一个字符串：");
		for(i=0;i<100;i++)
		{
			scanf("%c",&a[i]);
			if(a[i]=='\n')
			{
				a[i]='\0';
				break;
			}
			else if(a[i]>='0'&&a[i]<='9')
				a[i]='*';
		}
		printf("正序：%s\n",a);
		printf("倒序：");
		for(k=i-1;k>=0;k--)
			printf("%c",a[k]);
		printf("\n");
	}
	return 0;
}
