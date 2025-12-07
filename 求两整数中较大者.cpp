#include<stdio.h>
int main()                 //定义主函数
{                            //主函数体开始 
	int max(int x,int y);//对被调用函数max的声明
	int a,b,c;           //定义变量abc
	scanf("%d,%d",&a,&b);//输入变量a和b的值
	c=max(a,b);          //
	printf("max=%d",c);
	return 0;
}
//定义max函数
int max(int x,int y)//定义max函数，函数值为整型（int),函数参数x和y为整型
{
  int z;
  if(x>y)z=x;
  else z=y;
  return(z);	
}
