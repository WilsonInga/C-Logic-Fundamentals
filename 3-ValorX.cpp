#include<stdio.h>

int main(){
	float a,b,x;
	
	printf("Escribir a\n");
	scanf("%f",&a);
	printf("Escribir b\n");
	scanf("%f",&b);
	
	if(a!=0){
		x=(-b/a);
		printf("el valor de x es:%4.2f",x);
	}
	else{
	    printf("Solucion indeterminada");
	}
	return 0;
}
	    



