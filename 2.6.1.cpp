/*'x'表示常量！*/
/*应该用数组表示个数*/
#include<stdio.h>
int main() {
	char x;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	printf("输入一串字符");
	while (1) {
		x = getchar();
		if (x < 32 && x != 10)
			a++;//制表符（ASK2值小于32）
		else if (x == 10)
		{
			a++;
			break;//遇换行停止
		} 
		else if (x == 32)
			b++;//空格
		else if (x >= 48 && x <= 57)
			c++;//数字
		else if (x >= 65 && x <= 90)
			d++;//大写字母
		else if (x >= 97 && x <= 122)
			e++;//小写字母
		else
			f++;//其他字符}
	}
	printf("制表符:%d\n空格:%d\n数字:%d\n大写字母:%d\n小写字母:%d\n其他字符:%d\n", a, b, c, d, e, f);
	return 0;/*不能中间换行？*/
}
