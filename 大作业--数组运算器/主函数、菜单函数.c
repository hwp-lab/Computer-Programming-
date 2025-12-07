#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"createarray.h"
#include"deletarray.h"
#include"insertarray.h"
#include"findarray.h"
#include"judgearray.h"
#include"sortarray.h"
#define z 20//固定初始数组长度就行,不知道为啥不让我用n；
int y=20;//表示当前数组元素数目
/*函数声明*/
void createarray(int*s);//创建
void printarray(int*s);//打印
void deletarray(int*s);//删除
void insertarray(int*s);//插入
void statisticarray(int*s);//统计
void findarray(int*s);//查找
void judgearray(int*s);//判断
void sortarray(int*s);//排序
/*主函数*/
int main()
{
	int m;
	int s[z];
	for(;;)
	{
		printf("select 0-8\n");
		printf("0-退出\n");
		printf("1-生成样本数据\n");
		printf("2-显示数组\n");
		printf("3-删除元素\n");
		printf("4-插入元素\n");
		printf("5-统计\n");
		printf("6-查找元素\n");
		printf("7-判断\n");
		printf("8-排序\n");
		scanf("%d",&m);
		while(m<0||m>8)
		{
			printf("error,input again\n");
			scanf("%d",&m);
		}
		switch(m)
		{
		case 0:
			printf("goodbye\n");
			return 0;
		case 1:
			createarray(s);
			break;
		case 2:	
			printarray(s);
			break;
		case 3:
			deletarray(s);
			break;
		case 4:
			insertarray(s);
			break;
		case 5:
			statisticarray(s);
			break;
		case 6:
			findarray(s);
			break;
		case 7:
			judgearray(s);
			break;
		case 8:
			sortarray(s);
			break;
		default:
			printf("input error\n");
			break;
		}
	}
	return 0;
}
/*------------------------生成样本数据函数-----------------------------------------*/
void createarray(int*s)
{
	int m;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-指定范围随机数\n");
	printf("2-键盘输入\n");
	printf("3-整个数组输入\n");
	printf("4-等差数列\n");
	scanf("%d",&m);
	while(m<0||m>4)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch(m)
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1:
		y=20;
		int a,b;
		printf("input the range a-b:");
		scanf("%d %d",&a,&b);
		randcreate(s,a,b);
		break;
	case 2:
		printf("enter the number:");
		scanf("%d",&y);
		while(y>20||y<=0)
		{
			printf("input error\ninput again(0<y<=20)");
			scanf("%d",&y);
		}
		printf("enter %d elements:",y);
		for(int i=0;i<y;i++)
			scanf("%d",&s[i]);
		printarray(s);
		break;
	case 3:
		y=20;
		int ab;
		printf("input the number:");
		scanf("%d",&ab);
		for(int i=0;i<z;i++)
			s[i]=ab;
		printarray(s);
		break;
	case 4:
		y=20;
		printf("输入首项、公差：");
		int c,d;
		scanf("%d %d",&c,&d);
		dc(s,c,d);
		printarray(s);
		break;
	}
}
/*------------------------------显示数组函数-------------------------------*/
void printarray(int*s)
{
	for(int i=0;i<y;i++)
		printf("%d ",s[i]);
	printf("\n");
}
/*--------------------------------删除函数---------------------------------*/
void deletarray(int*s)
{
	int m;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-删除指定下标元素\n");
	printf("2-删除指定值的元素\n");
	printf("3-删除指定下标区间的元素\n");
	scanf("%d",&m);
	while(m<0||m>3)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch (m) 
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1://删除指定下标元素
		int e;
		printf("imput the index:");
		scanf("%d",&e);
		dsubscript(s,y,e);
		y--;
		printarray(s);
		break;
	case 2://删除指定值的元素
		int f;
		printf("input the element:");
		scanf("%d",&f);
		y=delement(s,y,f);
		printarray(s);
		break;
	case 3://删除指定下标区间的元素
		int g,h;
		printf("input range:");
		scanf("%d %d",&g,&h);
		while(g>h||g<0||h>=y)
		{
			printf("input range again:");
			scanf("%d %d",&g,&h);
		}
		drange(s,y,g,h);
		y=y-(h-g+1);
		printarray(s);
		break;
	default:
		printf("input error\n");
	}
}
/*-----------------------------插入函数--------------------------------------*/
void insertarray(int*s)
{
	int m;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-插入指定下标位置\n");
	printf("2-有序数组插入新元素\n");
	scanf("%d",&m);
	while(m<0||m>2)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch (m) 
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1:/*插入指定下标位置*/
		int a,b;
		if(y>=20)
		{
			printf("the array is full\n");
			break;
		}
		printf("input certain index&element:");
		scanf("%d %d",&a,&b);
		incertain(s,y,a,b);
		y++;
		printarray(s);
		break;
	case 2:/*有序数组插入新元素*/
		if(y>=20)
		{
			printf("the array is full\n");
			break;
		}
		int c;
		printf("input a number:");
		scanf("%d",&c);
		insorted(s,y,c);
		y++;
		printarray(s);
		break;
	default:
		printf("input error\n");
	}
}
/*-----------------------------统计函数----------------------------------*/
void statisticarray(int*s)
{
	int m,i;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-求最大值\n");
	printf("2-求最小值\n");
	printf("3-求平均值\n");
	scanf("%d",&m);
	while(m<0||m>3)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch (m) 
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1:/*求最大值*/
		int max=s[0];
		for(i=0;i<y;i++)
			if(s[i]>max)
				max=s[i];
		printf("max is %d\n",max);
		break;
	case 2:/*求最小值*/
		int min=s[0];
		for(i=0;i<y;i++)
			if(s[i]<min)
				min=s[i];
		printf("min is %d\n",min);
		break;
	case 3:/*求平均值*/
		int sum=0;
		for(i=0;i<y;i++)
			sum=sum+s[i];
		float ave=(sum+0.0)/y;
		printf("ave is %.2f\n",ave);
		break;
	default:
		printf("input error\n");
	}
}
/*----------------------------------查找函数-------------------------------*/
void findarray(int*s)
{
	int m;
	int n;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-顺序查找\n");
	printf("2-二分查找\n");
	scanf("%d",&m);
	while(m<0||m>2)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch (m) 
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1:/*顺序查找*/
		printf("input the element:");
		scanf("%d",&n);
		findorder(s,y,n);
		break;
	case 2:/*二分查找*/
		int t;
		t=ifascending(s,y);
		if(!t)
			break;
		printf("input the element:");
		scanf("%d",&n);
		//sortselection(s,y);判断后就不用排了
		findbinary(s,y,n);
		break;
	default:
		printf("input error\n");
	}
}
/*------------------------------判断函数-----------------------------------*/
void judgearray(int*s)
{
	int m;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-是否升序排列\n");
	printf("2-是否降序排列\n");
	printf("3-是否全部相等\n");
	scanf("%d",&m);
	while(m<0||m>3)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch (m) 
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1:/*是否升序排列*/
		ifascending(s,y);
		break;
	case 2:/*是否降序排列*/
		ifdescending(s,y);
		break;
	case 3:/*是否全部相等*/
		ifequal(s,y);
		break;
	default:
		printf("input error\n");
	}
}
/*---------------------------排序函数--------------------------------------*/
void sortarray(int*s)
{
	int m;
	printf("input:\n");
	printf("0-退出\n");
	printf("1-冒泡排序\n");
	printf("2-选择排序\n");
	printf("3-插入排序\n");
	printf("4-数组逆置\n");
	printf("5-快速排序\n");
	printf("6-归并排序\n");
	printf("7-交换排序-我喜欢...\n");
	scanf("%d",&m);
	while(m<0||m>7)
	{
		printf("error,input again\n");
		scanf("%d",&m);
	}
	switch(m)
	{
	case 0:
		printf("goodbye\n");
		return;
	case 1:/*冒泡排序*/
		sortbubble(s,y);
		printarray(s);
		break;
	case 2:/*选择排序*/
		sortselection(s,y);
		printarray(s);
		break;
	case 3:/*插入排序*/
		sortinsertion(s,y);
		printarray(s);
		break;
	case 4:/*数组逆置*/
		sortreverse(s,y);
		printarray(s);
		break;
	case 5:
		sortquick(s,0,y-1);
		printarray(s);
		break;
	case 6:/*归并排序*/
		sortmerge(s,0,y-1);
		printarray(s);
		break;
	case 7:/*交换排序*/
		sortfool(s,y);
		printarray(s);
		break;
	}
}


