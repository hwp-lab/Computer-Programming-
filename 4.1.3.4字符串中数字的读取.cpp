/*竟然绕出来了，太过于牛马。。。*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char*operate(char*s);
int main()
{
	char s[50];
	char *t;
	fgets(s,sizeof(s),stdin);//strlen(s)不可以啊，s还没初始化
	t=operate(s);
	printf("%s",t);
	free(t);
	return 0;
}
char*operate(char*s)
{
	int i,l;
	l=strlen(s);
	char*t=(char*)malloc(l+1);
	int j=0;
	int in=0;
	for(i=0;i<l;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			if(i==0&&(s[i+1]>='0'&&s[i+1]<='9'))
			{
				t[j]=s[i];
				in=1;
				j++;
			}
			else if((i!=l-1)&&
				((s[i-1]>='0'&&s[i-1]<='9')||(s[i+1]>='0'&&s[i+1]<='9')))
			{
				if(in==0&&j>0)
				{
					t[j]=',';
					j++;
					in=1;
				}
				t[j]=s[i];
				in=1;
				j++;
			}
			if((i==l-1)&&(s[i-1]>='0'&&s[i-1]<='9'))
			{
				t[j]=s[i];
				j++;
			}
		}
		else if(in==1)
			in=0;
	}
	t[j]='\0';
	return t;
}
/*来自科技的算法，看都看不动了
char* operate(char* s) 
{
int i, j = 0, l;
l = strlen(s);
char* t = (char*)malloc(l * 2);  // 预分配足够空间，最多能存储l个数字和l-1个逗号

int start = -1;  // 用于标记数字串的起始位置
for (i = 0; i < l; i++) {
if (s[i] >= '0' && s[i] <= '9') {  // 如果当前字符是数字
if (start == -1) {  // 如果还没有开始一个数字串
start = i;  // 记录数字串的起始位置
}
} else {  // 如果当前字符不是数字
if (start != -1) {  // 如果已经开始了一个数字串
if (i - start >= 2) {  // 只有数字串长度大于等于2才被保留
if (j > 0) {  // 如果不是第一个数字串，添加逗号
t[j++] = ',';
}
// 将当前数字串添加到结果字符串中
for (int k = start; k < i; k++) {
t[j++] = s[k];
}
}
start = -1;  // 重置数字串的起始位置
}
}
}*/
