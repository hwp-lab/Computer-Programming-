#include<stdio.h>
int main()
{
	int weight;
	float height,bmi;
	scanf("%d\n",&weight);
	scanf("%f",&height);
	bmi=weight/height/height;
	printf("bmi is %f",bmi);
	return 0;
}
