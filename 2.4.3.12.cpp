#include<stdio.h>
#include<time.h>
int main()
{
	FILE*fpi,*fpo;
	time_t seconds;
	char m[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}};
	int l=0;
	int year,month,day,hour,minute,second;
	float a[100]={0};
	int n;
	int i;
	printf("有几个数（1-100）：");
	scanf("%d",&n);
	fpi=fopen("data.txt","r");
	if(fpi==NULL)
	{
		fpi=fopen("data.txt","w+");
		printf("输入%d个数",n);
		for(i=0;i<n;i++)
		{
			scanf("%f",&a[i]);
			fprintf(fpi,"%.1f ",a[i]);
		}
		rewind(fpi);//调整到文件开头，以便后序程序从开头读取文件数据
	}
	fpo=fopen("result.txt","a");//以追加的方式“a"打开当前的文本文件
	for(i=0;i<n;i++)
		fscanf(fpi,"%f",&a[i]);
	fclose(fpi);
	seconds=time(NULL)+8*60*60;
	second=seconds%60;//现在的秒数
	seconds=seconds/60;//总共的完整分钟数
	minute=seconds%60;//现在的分钟数
	seconds=seconds/60;//总共的完整小时数
	hour=seconds%24;//现在的小时数
	seconds=seconds/24;//总共的完整天数
	year=1970;
	l=(((year%4==0)&&(year%100!=0))||(year%400==0));
	while(seconds>365)
	{
		if(l)
			seconds=seconds-366;
		else
			seconds=seconds-365;
		year=year+1;
		l=(((year%4==0)&&(year%100!=0))||(year%400==0));
	}	
	month=1;
	for(i=0;i<12&&seconds>m[l][i];i++,month++)
		seconds=seconds-m[l][i];
	day=seconds+1;
	/*写数据到文件*/
	fprintf(fpo,"%d-%02d-%02d,%02d:%02d:%02d\n",
		year,month,day,hour,minute,second);
	for(i=0;i<n;i++)
		fprintf(fpo,"%.1f ",a[i]);
	fprintf(fpo,"\n");
	fclose(fpo);
	return 0;
}
