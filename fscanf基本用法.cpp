#include<stdio.h>
int main()
{
	int a;
	FILE*fp;
	fp=fopen("data (2).txt","r");
	fscanf(fp,"%d",&a);
	fclose(fp);
	printf("a=%d",a);
	return 0;
}
