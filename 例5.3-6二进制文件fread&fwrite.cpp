#include<stdio.h>
struct stu
{
	char name[16];
	float a,b,c,sum;
};
int main()
{
	int i;
	FILE*fp;
	struct stu s[3]={{"hwp",90,92,96,0},{"ytq",85,88,95,0},\
		{"lyh",95,86,92,0}};
	if(!(fp=fopen("studenttt.txt","wb")))
	{
		printf("can not open this file\n");
		return 1;
	}
	for(i=0;i<3;i++)//这俩可以在一起循环，不知道课本为啥这么写
	{
		s[i].sum=s[i].a+s[i].b+s[i].c;
		fwrite(s+i,sizeof(struct stu),1,fp);
	}
	//for(i=0;i<3;i++)		
	fclose(fp);
	if(!(fp=fopen("studenttt.txt","rb")))
	{
		printf("can not open this file\n");
		return 1;
	}
	for(i=0;i<3;i++)
	{
		fread(s+i,sizeof(struct stu),1,fp);
	printf("%-16s %6.1f %6.1f %6.1f %6.1f\n",
		s[i].name,s[i].a,s[i].b,s[i].c,s[i].sum);//-表示左对齐哎
	}
	fclose(fp);
	//for(i=0;i<3;i++)//二进制文件不能直接打卡看了		
	return 0;
}
