#include<stdio.h>
int main()
{
	int x,y;
	for(;;)
	{
	printf("输入横纵坐标");
	scanf("%d%d",&x,&y);
	if(x>=-2&&x<=2&&y>=-2&&y<=2) printf("(%d,%d)在正方形内\n",x,y);
	else printf("(%d,%d)不在正方形内\n",x,y);
	}
	return 0;
}
