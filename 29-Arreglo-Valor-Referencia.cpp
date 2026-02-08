#include <stdio.h>
#include <math.h>

int potrat1(double x, double y)
{
	x=x*x;
	y=sqrt(y);
}
int potrat2(double* x,double* y)
{
	*x=(*x)*(*x);
	*y=sqrt(*y);
}

main(){
	
	double a, b;
	a=5.0; b=1.e2;
	potrat1(a,b);
	printf("a=%.1f b=%.1lf",a,b);
	potrat2(&a,&b);
	printf("\na=%.1f b=%.1lf",a,b);
	
	
return 0;
}

