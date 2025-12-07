#include<stdio.h>
int main()
{
	struct stu
	{
		int num;
		char name[10];
	};
	struct stu s[3]={{101,"asd"},{202,"qwe"},{303,"zxc"}};
	struct stu *p;
	for(p=s;p<s+3;p++)
		printf("%d %s\n",(*p).num,(*p).name);
	struct stu t={404,"qwe"};
	struct stu*q;
	q=&t;//±ØĞëÓĞ&°¥
	printf("%d %s\n",q->num,q->name);
	return 0;
}
