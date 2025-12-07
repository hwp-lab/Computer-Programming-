#include<stdio.h>
int main()
{
	int a=2,b=3;
	FILE*fp;
	fp=fopen("data (2).txt","a");
	fprintf(fp,"%d",a+b);
	fclose(fp);
	return 0;
}
