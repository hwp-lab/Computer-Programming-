#include<stdio.h>
int main()
{
	int x,y;
	printf("x=");
	scanf("%d",&x);
	if(x>0) y=1;
	if(x==0) y=0;
	else y=-1;
	printf("y=%d",y);
	return 0;
}
