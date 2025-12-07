#include<stdio.h>
#include<string.h>
int main()
{
	char a[][13]={"valid","january","february","march","april","may","june","july","august","september",
		"october","november","december"};
	printf("input a month:");
	int n;
	scanf("%d",&n);
	printf("%s",(n<1||n>12)?a[0]:a[n]);
	return 0;
}
