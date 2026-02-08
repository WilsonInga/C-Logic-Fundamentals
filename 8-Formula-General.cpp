#include <stdio.h>
#include <math.h>

int main (){
	float a,b,c,d,x1,x2;
	printf("Ingrese a\n");
	scanf("%f",&a);
	printf("Ingrese b\n");
	scanf("%f",&b);
	printf("Ingrese c\n");
	scanf("%f",&c);
	
	d= sqrtf(b*b-4*a*c);
	x1= (-b+d)/(2*a);
	x2= (-b-d)/(2*a);
	
	printf("x1 es:%4.1f\n",x1);
	printf("x2 es:%4.1f\n",x2);
	
	return 0;
	
}





