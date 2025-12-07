#include<stdio.h>
int main()
{
	int a,b,c;
	int x,y;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	/*µÚÒ»Ìâ*/ 
	printf("(1)[b>c&&b==c]=%d\n",b>c&&b==c);
	printf("(2)[!(a>b)&&!c||1]=%d\n",!(a>b)&&!c||1);
	printf("(3)[!(x=a)&&(y=b)&&0]=%d\n",!(x=a)&&(y=b)&&0);
	printf("(4)[!(a+b)+c-1&&b+c/2]=%d\n",!(a+b)+c-1&&b+c/2);
	printf("(5)[1&&30%10>=0&&30%10<=3]=%d\n",1&&30%10>=0&&30%10<=3);
	return 0;
}
