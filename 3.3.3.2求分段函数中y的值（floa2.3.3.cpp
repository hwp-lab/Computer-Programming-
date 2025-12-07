#include<stdio.h>
int main()
{
    float x,y;
    for(;;)
	{
	printf("x=");
	scanf("%f",&x);
	if(x>=0&&x<10) y=x;
	else if(x>=10&&x<20) y=x*x+1;
	else if(x>=20&&x<30) y=x*x*x+x*x+1;
	else {y=-1; printf("Error!\n");}	
	if(y!=-1)printf("y=%.2f\n",y);
	}
	return 0;
}
