#include<stdio.h>
int m=10,n=5,x=1,y=3;
int max(int x,int y)
{
	return (x>y)?x:y;
}
int z;
int main()
{
	int m=7;
	z=max(m,n);
	printf("z=%d\nm=%d\nn=%d\n",z,m,n);//编译器会在局部变量的作用域内屏蔽同名全局变量
	return 0;
}
