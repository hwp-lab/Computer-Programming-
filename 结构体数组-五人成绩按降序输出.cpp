#include<stdio.h>
struct student
{
	int num;
	char name[20];
	float score;
}s[5]={12,"a",98.5,32,"b",100,53,"c",88,45,"d",76,34,"e",90.5};
int main()
{
	int i,j;
	struct student t;
	for(i=0;i<4;i++)
		for(j=i+1;j<5;j++)
			if(s[i].score<s[j].score)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
	for(i=0;i<5;i++)
		printf("%d %s %.1f\n",s[i].num,s[i].name,s[i].score);
	return 0;
}
