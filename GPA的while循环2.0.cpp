#include<stdio.h>
int main() {
	double GPA;
	
	while (GPA >= 0)
	{
		printf("你的GPA是；");
		scanf("%lf", &GPA);
		
		if (GPA > 4.3)
			printf("你作弊了哦！\n");
		if (GPA == 4.3)
			printf("你太牛了！\n");
		if (GPA >= 0 && GPA < 4.3)
			printf("你还要努力！\n");
	}
	return 0;
}
