#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s;
	float area;
	while(area)
	{
		printf("请输入三角形三边边长");
		scanf("%d %d %d",&a,&b,&c);
		if((a+b>c)&&(a+c>b)&&(b+c>a))
		{
			s=(a+b+c)/2;
			area=sqrt(s*(s-a)*(s-b)*(s-c));
			printf("area=%.2f\n",area);
		}
	else
		printf("别胡闹了\n");
	}
	return 0;
}
