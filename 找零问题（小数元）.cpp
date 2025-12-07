#include<stdio.h>
int main()
{
	float a[8]={100,50,20,10,5,1,0.5,0.1};
	float x,k;
	int i,n;
	printf("购物花费x=");
	scanf("%f",&x);
	k=100-x;
	printf("找零%.1f元\n",k);
	if(x<=0||x>100)
		printf("error");
	else
	{
		for(i=0;i<8;i++)
			if(k/a[i]>=1)
			{
				n=(int)(k/a[i]);
				k=k-(int)(k/a[i])*a[i];
				printf("%.1f元 %d张\n",a[i],n);
			}
	}
	return 0;
}
