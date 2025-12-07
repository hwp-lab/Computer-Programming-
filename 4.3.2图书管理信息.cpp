#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define caldate(st)((st).pdate.y*10000+(st).pdate.m*100+(st).pdate.d)
/*定义结构体*/
typedef struct date
{
	int y;
	int m;
	int d;
}date;//???
typedef struct book
{
	char bn[40];
	char title[80];
	char author[40];
	char pub[60];
	date pdate;
}book;
/*函数声明*/
book*input(int*n);
void output(book books[],int n);
void save(book books[],int n,char *filename);
int cdate(const void *b1,const void *b2);//?
int cpubname(const void *b1,const void *b2);//const把变量变成只读的变量（不可作左值）
/*主函数*/
int main()
{
	book*books;
	int booknum;
	books=input(&booknum);
	output(books,booknum);//输出排序前的书籍信息
	printf("\n---按出版时间先后排序---\n");
	qsort(books,booknum,sizeof(books[0]),cdate);//qsort在头文件<stdlib.h>中
	output(books,booknum);
	save(books,booknum,"booksbydate.txt");
	printf("\n---按出版社名称排序---\n");
	qsort(books,booknum,sizeof(books[0]),cpubname);
	output(books,booknum);
	save(books,booknum,"booksbypubname.txt");
	return 0;
}
/*输入函数*/
book*input(int*n)
{
	char buff[200]={0};
	const char de[2]="#";
	char*token;
	FILE*fp;
	book*books;
	int num;
	int i,j;
	fp=fopen("booksinfodata","r");
	if(fp==NULL)
	{
		printf("file open failed\n");
		exit(0);
	}
	fgets(buff,200,fp);//读取文件第一行到buff中
	num=atoi(buff);//int atoi(const char *str)把字符串转化为整型
	if(num<=0)
		return(NULL);
	*n=num;//通过指针将数字写回主调函数中的变量booknum
	books=(book*)malloc(num*sizeof(book));
	for(i=0;i<num;i++)
	{
		fgets(buff,200,fp);//
		token=strtok(buff,de);//按照分隔符#取一个字段
		for(j=0;j<7&&token!=NULL;j++)
		{
			switch(j)
			{
			case 0:
				strcpy(books[i].bn,token);
				break;
			case 1:
				strcpy(books[i].title,token);
				break;
			case 2:
				strcpy(books[i].author,token);
				break;
			case 3:
				strcpy(books[i].pub,token);
				break;
			case 4:
				books[i].pdate.y=atoi(token);
				break;
			case 5:
				books[i].pdate.m=atoi(token);
				break;
			case 6:
				books[i].pdate.d=atoi(token);
				break;
			}
			token=strtok(NULL,de);
		}
	}
	return books;//返回存放书籍信息的内存地址
}
/*输出函数*/
void output(book books[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("索书号%s\n",books[i].bn);
		printf("书名%s\n",books[i].title);
		printf("作者%s\n",books[i].author);
		printf("出版社%s\n",books[i].pub);
		printf("出版日期：年月日\n",books[i].pdate.y,books[i].pdate.m,books[i].pdate.d);
	}
}
/*保存函数*/
void save(book books[],int n,char *filename)
{
	FILE*fp;
	fp=fopen(filename,"w");
	if(fp==NULL)
	{
		printf("file open failed\n");
		exit(0);
	}
	int i;
	for(i=0;i<n;i++)
	{
		fprintf(fp,"索书号%s\n",books[i].bn);
		fprintf(fp,"书名%s\n",books[i].title);
		fprintf(fp,"作者%s\n",books[i].author);
		fprintf(fp,"出版社%s\n",books[i].pub);
		fprintf(fp,"出版日期：年月日\n",books[i].pdate.y,books[i].pdate.m,books[i].pdate.d);
	}
}
/*比较出版日期函数*/
int cdate(const void *b1,const void*b2)
{
	int d1,d2;
	d1=caldate(*(book*)b1);
	d2=caldate(*(book*)b2);
	return (d1-d2);
}
/*比较出版社名称函数*/
int cpubname(const void *b1,const void *b2)
{
	return(strcmp(((book*)b1)->pub,((book*)b2)->pub));
}
