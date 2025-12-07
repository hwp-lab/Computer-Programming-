#include<stdio.h>
int main()
{
    int a1,b1,a,b,c,t=1;
    for(;;)
    {
		printf("输入分子和分母");
		scanf("%d%d",&a,&b);
		a1=a;
		b1=b;
		if(a>=b||a<=0||b<=0)
			printf("Error!\n");
		else
		{
			while(t=b%a)
				{
				b=a;
				a=t;
				}
			c=a;
			printf("c=%d\n",c);
			a1=a1/c;
			b1=b1/c;
		printf("%d/%d\n",a1,b1);
		}
	}
	return 0;
}
