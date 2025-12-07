#include<stdio.h>
int main()
{
	int a[8]={0,1,2,3,4,5,6,7};
	int *p=&a[3];
	printf("*p£º%d\n",*p);//3
	printf("*(p+2)£º%d\n",*(p+2));//5
	printf("*(p-2)£º%d\n",*(p-2));//1
	printf("*p--£º%d\n",*p--);//3
	printf("*p++£º%d\n",*p++);//2
	printf("*p£º%d\n",*p);
	printf("*--p£º%d\n",*--p);//2
	printf("*p£º%d\n",*p);
	printf("*++p£º%d\n",*++p);//3
	printf("*p£º%d\n",*p);
	printf("--(*p)£º%d\n",--(*p));//2
	printf("*p£º%d\n",*p);
	printf("++(*p)£º%d\n",++(*p));//4
	printf("*p£º%d\n",*p);//3
	return 0;
}
