#include<stdio.h>
double glb;
int max(int x,int y)
{
	static int s;
	s=s+x;
	printf("x的地址%p,s的地址%p\n",&x,&s);
	return s>y?s:y;
}
int main()
{
	int i;
	char str[8]="USTC";
	printf("glb的地址%p,i的地址是%p\n",&glb,&i);
	printf("str的地址%p,\"USTC\"的地址%p\n",str,"USTC");
	for(i=1;i<3;i++)
		printf("%d\n",max(i,i*i));
	printf("main的地址%p，max的地址%p\n",main,max);
	return 0;
}
