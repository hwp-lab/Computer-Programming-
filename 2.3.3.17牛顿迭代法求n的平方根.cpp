#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double a,b,c=1;
    for(;;)
    {
    	printf("n=");
    	scanf("%d",&n);
    	a=n;
    	while(fabs(c)>=1e-6)
    	{
			b=0.5*(a+n/a);
			a=b;
			c=a-sqrt(n);
		}
		printf("n的平方根是%.2lf\n",sqrt(n));
		printf("牛顿迭代结果是%.2lf\n",a);
		c=1;
    }
	return 0;
}
