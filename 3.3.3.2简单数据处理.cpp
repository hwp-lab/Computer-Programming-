#include<stdio.h>
#include<string.h>
int n=0;
void add(int a[],int);
void delet(int a[],int);
int sum(int a[]);
float ave(int a[]);
int main()
{
	int a[100]={0};
	int m;
	int summ=0;			
	float avee=0;//不能放在循环里面啊
	for(;;)
	{
		printf("输入：\n0-打印数组；\n1-增加元素；\n2-删除元素；\n3-求和；\n4-求平均\n");
		scanf("%d",&m);
		switch(m)
		{
		case 1:
			int x;
			printf("input a number：");
			scanf("%d",&x);
			add(a,x);
			summ=sum(a);//这样就不用每次都输3、4了
			avee=ave(a);
			break;
		case 2:
			int i;
			printf("输入删除元素的位置：");
			scanf("%d",&i);
			if(i>=0&&i<n)//基本判断！
			{
			
				delet(a,i);
				summ=sum(a);
				avee=ave(a);
			}
			else
				printf("删除位置无效\n");//像GPT一样严谨
			break;
		case 3:
			summ=sum(a);
			printf("和：%d\n",summ);
			break;
		case 4:
			avee=ave(a);
			if(avee!=-1)
				printf("均值：%.2f\n",avee);
			break;
		case 0:
			int j;
			printf("当前数组：");
			for(j=0;j<n;j++)
				printf("%d ",a[j]);//分清楚i和j
			printf("\n");
			printf("数组大小：%d\n",n);
			printf("和：%d\n",summ);
			if(avee!=-1)
				printf("均值：%.2f\n",avee);
			break;
		default:
			printf("input error\n");
			break;
		}
	}
}
void add(int a[],int x)
{
	if(n<100)
	{
		a[n]=x;
		n++;
	}
	else
		printf("数组已满，无法添加更多元素\n");
}
void delet(int a[],int i)
{
	int j;
	if(i<0||i>=n)
	{
		printf("删除位置无效\n");
		return;//直接返回
	}
	for(j=i;j<n-1;j++)
		a[j]=a[j+1];
	n--;
}
int sum(int a[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	return sum;
}
float ave(int a[])
{
	float summ=0;
	summ=sum(a);
	if(n!=0)
		return summ/n;
	else 
	{
		printf("数组为空，无法计算均值\n");
		return -1;
	}
}
