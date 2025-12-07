#include<stdio.h>
#include<time.h>
void datetime()
{
	time_t mytime;
	mytime=time(NULL);//time是库函数，括号内是NULL时，表示当前时间
	printf(ctime(&mytime));
}
int main()
{
	void (*showdate)();
	int (*greeting)(const char*);//const不可少
	showdate=datetime;
	greeting=puts;
	showdate();
	greeting("hello");
	return 0;
}
