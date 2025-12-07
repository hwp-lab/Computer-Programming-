#include<stdio.h>
#include<math.h>
int cube(int);
int main()
{
	for(;;)
	{
		int n;
		printf("input n=");
		scanf("%d",&n);
		printf("%d\n",cube(n));
	}
	return 0;
}
int cube(int x)
{
	float t;
	t=exp(log(x)/3);
	return (int)t;
}

