#include<stdio.h>
int main()
{
	char *str= "Life is a journey, \
	so enjoy it.\
	Take each day as it comes.\
	Find joy in the little things.\
	Learn from every experience.\
	Keep a positive attitude and enjoy the ride.";
	char c;
	int num[26]={0};
	while((c=*str++))/*再加一个括号就不报错了。。。告诉编译器是赋值不是判断
		++是对str的，不能加括号*/
	{
		if(c>='a'&&c<='z')
			num[c-'a']++;
		else if(c>='A'&&c<='Z')
			num[c-'A']++;
		else if(c=='\0')
			break;
	}
	printf("a和A出现的次数：%d\n",num[0]);
	printf("b和B出现的次数：%d\n",num[1]);
	return 0;
}
