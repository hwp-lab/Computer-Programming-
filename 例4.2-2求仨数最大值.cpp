#include<stdio.h>
int max(int x,int y,int z)
{
	int t;
	if(x<y)
		t=y;
	else
		t=x;
	if(t<z)
		t=z;
	return t;
}
int main()
{
	int a,b,c;
	printf("input three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("max is %d",max(a,b,c));
	return 0;
}
