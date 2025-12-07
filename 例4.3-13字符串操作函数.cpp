#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	char t[50];
	int r;
	printf("strcpy:%s\n",strcpy(s,"hwp"));
	printf("strcpy:%s\n",strcpy(t,s));
	printf("s:%s\n",s);
	printf("strcat:%s\n",strcat(t,s));
	r=strcmp(t,s);
	printf("%d\n%d\n%d",r,strlen(t),sizeof(t));
	return 0;
}
