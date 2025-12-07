#include<stdio.h>
#include<string.h>
int main()
{
	char str1[9]="abcde";
	char str2[6]="abcde";//数组长是5的话根本不允许。。
	char *str= "abcde";
	printf("str1=%s的大小为%d，长度为%d\n",str1,sizeof(str1),strlen(str1));
	printf("str2=%s的大小为%d，长度为%d\n",str2,sizeof(str2),strlen(str2));
	printf("1.str=%s的大小为%d，长度为%d\n",str,sizeof(str),strlen(str));//sizeof计算的是指针的大小，多数平台是4/8字节
	str=str1;
	printf("2.str=%s的大小为%d，长度为%d\n",str,sizeof(str),strlen(str));
	str=str2;
	printf("3.str=%s的大小为%d，长度为%d\n",str,sizeof(str),strlen(str));
	printf("字符串%s的大小为%d,长度为%d\n","abcde",sizeof("abcde"),strlen("abcde"));
	printf("str1的地址为%p,str2的地址为%p\n",str1,str2);
	printf("字符串的地址为%p,指针的地址为%p\n","abcde","&str");
	return 0;
}
