#include<stdio.h>
int main()
{
	int a;
	for(;;)
	{
		printf("请输入一个数：");
		scanf("%d",&a);
		if(a!=0)
		{
		do
		{
			printf("%d",a%10);
			a=a/10;		
		}
		while(a!=0);
		printf("\n");
		}
		else break;
	}
	return 0;
}
