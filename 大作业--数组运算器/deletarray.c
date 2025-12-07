/*删除指定下标元素*/
void dsubscript(int*s,int y,int e)
{
	int i;
	for(i=e;i<y-1;i++)
		s[i]=s[i+1];
}
/*删除指定值的元素*/
int delement(int*s,int y,int f)
{
	int i,k=0,j=0;
	int t[y];
	for(i=0;i<y;i++)
	{
		t[i]=s[i];
	}
	for(i=0;i<y;i++)
	{
		if(t[i]!=f)
		{
			s[j]=t[i];
			j++;
		}
		else
			k++;
	}
	return y-k;
}
/*删除指定下标区间的元素*/
void drange(int*s,int y,int g,int h)
{
	int i,l;
	l=h-g+1;
	for(i=g;i<y-l;i++)
		s[i]=s[i+l];
}
