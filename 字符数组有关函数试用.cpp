#include<stdio.h>
#include<string.h>
int main()
{
	/*strcpy*/
	char k[]="hello,world";
	char l[10]="",m[10]={0};
	strncpy(l,k,6);
	strncpy(m,k+strlen(k)-6,6);
	printf("%s\n%s\n",l,m);
	/*strcat*/
	char h[8]="hello ";
	char j[]="world";
	printf("%s\n",strcat(h,j));
	/*strlen*/
	char f[]="hello";
	char g[5];
	gets(g);
	printf("sizeof(f)=%d,strlen(f)=%d\n",sizeof(f),strlen(f));
	printf("sizeof(g)=%d,strlen(g)=%d\n",sizeof(g),strlen(g));
	char a[9]="";
	char b[9]="x";
	char c[9]={'x'};
	printf("数组c的起始地址%o\n",c);
	printf("a的内容是%s,长度是%d\n",a,sizeof(a));
	printf("b的内容是%s,长度是%d\n",b,sizeof(b));
	printf("c的内容是%s,长度是%d\n",c,sizeof(c));
	printf("\"x\"的内容是%s,长度是%d\n","x",sizeof("x"));
	printf("\'x\'的内容是%c,长度是%d\n",'x',sizeof('x'));
	char d[8],e[8];
	int i;
	for(i=0;i<7;i++)
		scanf("%c",&d[i]);
	scanf("%s",e);
	printf("%s\n%s",d,e);
	return 0;
}
