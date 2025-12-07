#include<stdio.h>
int main()
{
    int x,y;
    for(;;)
    {
	printf("x=");
	scanf("%d",&x);
	if(x>=0)
	{
	switch(x/10)
		{
		case 0: y=x;break;
		case 1: y=x*x+1;break;
		case 2: y=x*x*x+x*x+1;break;
		default: y=-1; printf("Error!\n");
		}
	if(y!=-1) printf("y=%d\n",y);	
	}
	else printf("Error!\n");
	}
	return 0;
}
