/*怎么输出05？*/
#include<stdio.h>
int main()
{
	struct time
	{
		int second;
		int minute;
		int hour;
	}t;
	int s,m,h,x;
	int s0,m0,h0;
	printf("输入时、分、秒：");
	scanf("%d %d %d",&t.hour,&t.minute,&t.second);
	s0=t.second;
	m0=t.minute;
	h0=t.hour;
	for(;;)
	{
		printf("输入调整时间的秒数：");
		scanf("%d",&x);
		if(x!=0)
		{
		/*确定秒*/
		s=t.second+x;
		if(s<0)
		{
			t.second=s%60+60;
			m=t.minute+s/60-1;
		}
		else
		{
			t.second=s%60;
			m=t.minute+s/60;
		}
		/*确定分钟*/
		if(m<0)
		{
			t.minute=m%60+60;
			h=m/60-1+t.hour;
		}
		else 
		{
			t.minute=m%60;
			h=m/60+t.hour;
		}
		/*小时*/
		if(h<0)
			t.hour=h%24+24;
		else 
			t.hour=h%24;
		printf("调整%d秒后为%2d:%2d:%2d\n",x,t.hour,t.minute,t.second);
		t.second=s0;
		t.minute=m0;
		t.hour=h0;
		}
		else 
			return 0;
	}
	return 0;
}
