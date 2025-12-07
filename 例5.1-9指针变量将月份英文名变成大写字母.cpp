#include<stdio.h>
int main()
{
	char name[13][20]={"input error","January","February","March",
		"April","May","June","July","August","September","October","November","December"};
	char (*p)[20];
	p=name;
	int i,j;
	for(i=0;i<13;i++)
	{
		for(j=0;j<20;j++)
			if(*(*(p+i)+j)>='a'&&*(*(p+i)+j)<'z')
				name[i][j]=name[i][j]-32;
	}
	for(p=name;p<name+13;p++)
		printf("%s\n",*p);
	return 0;
}
