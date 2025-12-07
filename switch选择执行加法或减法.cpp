#include<stdio.h>
int main()
{
	void action1(int,int),action2(int,int);//void函数无返回值
	char ch;
	int a=425,b=524;
	ch=getchar();
	switch(ch)
	{
		case 'a':
		case 'A':action1(a,b);break;
		case 'b':
		case 'B':action2(a,b);break;
		default: putchar('\a');
	}
	return 0;
}
void action1(int x,int y)
{
	printf("x+y=%d",x+y);
}
void action2(int x,int y)
{
	printf("x*y=%d",x*y);
}
