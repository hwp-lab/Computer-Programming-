#include<stdio.h>
int main()
{
	int i,j,k,t;
	int m=0,n=0;
	int a[8888][9]={0};
	for(i=11;i<100;i++)
		for(j=101;j<1000;j++)
			if(i*j<10000)
			{
				k=i*j;
				a[m][0]=i/10;
				a[m][1]=i%10;
				a[m][2]=j/100;
				a[m][3]=(j%100)/10;
				a[m][4]=j%10;
				a[m][5]=k/1000;
				a[m][6]=(k%1000)/100;
				a[m][7]=(k%100)/10;
				a[m][8]=k%10;
				m=m+1;
			}
	for(i=0;i<m;i++)
	{
		t=1;
		for(j=0;j<8;j++)
			for(k=j+1;k<9;k++)
				if(a[i][j]==a[i][k])
				{
					t=0;
					break;
				}
		if(t)
			n=n+1;
	}
	printf("有%d种情况",n);
	return 0;
}
