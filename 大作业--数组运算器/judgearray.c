#include<stdio.h>
/*是否升序排列*/
int ifascending(int*s,int y)
{
	int i=0,t=0;
	while(s[i]<=s[i+1]&&i<y-1)
		i++;
	if(i==y-1)
	{
		printf("The array is sorted in ascending order.\n");
		t=1;
	}
	else
		printf("The array is not sorted in ascending order.\n");
	return t;
}
/*是否降序排列*/
int ifdescending(int*s,int y)
{
	int i=0,t=0;
	while(s[i]>=s[i+1]&&i<y-1)
		i++;
	if(i==y-1)
	{
		printf("The array is sorted in descending order.\n");
		t=1;
	}
	else
		printf("The array is not sorted in descending order.\n");
	return t;
}
/*是否全部相等*/
void ifequal(int*s,int y)
{
	int i=0;
	while(s[i]==s[i+1]&&i<y-1)
		i++;
	if(i==y-1)
		printf("The array is equal.\n");
	else
		printf("The array is not equal.\n");
}
