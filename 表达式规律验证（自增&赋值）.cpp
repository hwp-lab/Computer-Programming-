#include<stdio.h>
int main()
{
	/*自增自减*/
	int a,b,x;
	a=4;
	b=4;
	x=a++;
	printf("a=%d\n",a);
	printf("x=%d\n",x);
	x=++b;
	printf("b=%d\n",b);
	printf("x=%d\n",x);
	/*赋值表达式*/
	int c,y,z;
	c=2;
	y=2;
	z=2;
	y+=c;
	z*=c+1;
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	/*类型转换*/
	float e=0.5;
	int f;
	f=e;
	printf("e=%.1f\n",e);
	printf("f=%d\n",f);
	
	
}

