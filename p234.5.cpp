#include<stdio.h>
int main()
{
	int a[]={23,74,88,19,6,35,41,93,24,100};
	int *p=a,*q=&a[4];
	printf("*p:%d\n",*p);
	printf("p[2]:%d\n",p[2]);
	printf("*(p+5):%d\n",*(p+5));
	printf("*p+5:%d\n",*p+5);
	printf("q-p:%p\n",q-p);//地址！！！！但还是警告用lld哎，怪，又不问了。。。
	printf("*p-*q:%d\n",*p-*q);
	printf("q[0]:%d\n",q[0]);
	printf("q[2]:%d\n",q[2]);
	printf("*(q-2):%d\n",*(q-2));
	printf("q[-2]:%d\n",q[-2]);
	printf("p<q:%d\n",p<q);
	printf("*p<*q:%d\n",*p<*q);
	return 0;
}
