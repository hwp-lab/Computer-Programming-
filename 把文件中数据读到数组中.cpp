#include<stdio.h>
#define n 8
int main()
{
	float m[n]={0};
	float sum=0,ave;
	int i;
	FILE*fp;
	fp=fopen("data.txt","r");//r表示读文件
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%f",&m[i]);
		printf("%.1f ",m[i]);
		sum=sum+m[i];
	}
	ave=sum/n;
	printf("\nsum=%.2f",ave);
	fclose(fp);
	return 0;
}
