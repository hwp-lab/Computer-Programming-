#include<stdio.h>
#include<math.h>
#define m 5
#define n 4
int main()
{
	float score[m][n]={{87,72,91},{93,65,88},{75,50,73},{82,70,81},{91,86,95}};
	float (*p)[n];//括号不可少。
	for(p=score;p<score+m;p++)
	{
		(*p)[1]=sqrt((*p)[1])*10;
		(*p)[3]=((*p)[0]+(*p)[1]+(*p)[2])/3;
		printf("%.0f %.0f %.0f %.1f\n",(*p)[0],(*p)[1],(*p)[2],(*p)[3]);
	}
	float *q=&score[0][0];//q=score不行哎；干爆了，困死
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%.f ",*q++);
		putchar('\n');
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%.f ",*(*(score+i)+j));
		putchar('\n');
	}
	return 0;
}

