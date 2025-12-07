#include<stdio.h>
int main()
{
	int x,y,z;
	for(x=0;x<=20;x++)
		for(y=0;y<=33;y++)
		{
			z=100-x-y;
			if((5*x+3*y+z/3==100)&&(z%3==0))
				printf("公鸡数%d,母鸡数%d,小鸡数%d\n",x,y,z);
		}
}
