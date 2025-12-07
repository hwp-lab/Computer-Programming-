#include<stdio.h>
int main()
{
	int f[40]={1,1};
	int i;
	printf("%d\n%d\n",f[0],f[1]);
	for(i=2;i<40;i++)
	{
		f[i]=f[i-1]+f[i-2];
		printf("%d\n",f[i]);
	}
	return 0;
}
