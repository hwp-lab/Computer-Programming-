#include<stdio.h>
int main() {
	int weight, i;
	float height, bmi;
	for (i = 0; i < 3; i++) 
	{
		printf("输入体重（千克）；");
		scanf("%d", &weight);
		printf("输入身高（米）；");
		scanf("%f", &height);
		bmi = weight / height / height;
		printf("BMI is %.2f\n", bmi);
		if (bmi >= 25)
			printf("你超重了哦！\n");
		if (bmi > 18 && bmi < 25)
			printf("你的身材很标准\n");
		else printf("你太轻了哦\n");
	}
	return 0;
}
