#include<stdio.h>
int main() {
	double GPA;
	printf("你的GPA是；");
	scanf("%lf", &GPA);
	while (GPA >= 0) {
		if (GPA > 4.3)
			printf("你作弊了哦！\n");
		if (GPA == 4.3)
			printf("你太牛了！\n");
		if (GPA >= 0 && GPA < 4.3)
			printf("你还要努力！\n");
		printf("你的GPA是：");
		scanf("%lf", &GPA);
	}
	return 0;
}
