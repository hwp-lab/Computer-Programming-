#include<stdio.h>
int main()
{
	printf("x=");
	int x;
	scanf("%d",&x);
	printf("xµÄ·ûºÅÊÇ%d\n",x>0?1:x<0?-1:0);
	return 0;
}
