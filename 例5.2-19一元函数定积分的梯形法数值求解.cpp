#include<stdio.h>
#include<math.h>
double integral(double(*f)(double),double a,double b);
int main()
{
	double x,y,z;
	x=integral(sin,0.0,1.0);
	y=integral(cos,0.0,2.0);
	z=integral(exp,0.0,3.5);
	printf("x=%lf\ny=%lf\nz=%lf\n",x,y,z);
	return 0;
}
double integral(double(*f)(double),double a,double b)
{
	int n=1000,i;
	double d,h;
	d=(f(a)+f(b))/2.0;
	h=(b-a)/n;
	for(i=0;i<n;i++)
		d=d+f(a+h*i);
	return d*h;//自然指数函数
}

