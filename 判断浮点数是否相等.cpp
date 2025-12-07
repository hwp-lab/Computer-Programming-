#include<stdio.h>
#include<math.h>
int main()
{
	float a=0.1;
	float b=0.1;
	if(fabs(a-b)<1e-6)
		printf("a和b相等");
	else
		printf("a和b不相等");
	return 0;
}
