#include<stdio.h>
int main()
{
	int value[6]={1,5,10,20,50,100};
	int i,j,a,money,num=0;
	int n[6];
	for(i=0;i<6;i++)
	{
		printf("每种纸币数量：");
		scanf("%d",&n[i]);
	}
	printf("输入金额：");

	scanf("%d",&money);
	for(j=5;j>=0;j--)
	{
		if(money/value[j]<=n[j])
			a=money/value[j];
		else
			a=n[j];
		num=num+a;
		money=money%value[j];
	}
	if(money==0) printf("num is %d",num);
	else printf("fail");
	return 0;
}
