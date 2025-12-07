#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp,*fpp;
	int c;
	if(!(fp=fopen("file.txt","r")))
	{
		puts("file open failed\n");
		return EXIT_FAILURE;//stdlib定义的...
	}
	if(!(fpp=fopen("filee.txt","w")))
	{
		puts("filee open failed\n");
		return EXIT_FAILURE;
	}
	while((c=fgetc(fp))!=EOF)//什么原理啊
		fputc(c,fpp);//放fp,fpp不是文件名...
	fclose(fp);
	fclose(fpp);
	return 0;
}
