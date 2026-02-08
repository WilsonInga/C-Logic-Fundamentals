#include <stdio.h>
#include <math.h>

float f( float y){
	float x;
	x= (1/cos(y))*(cos(y)/sin(y));//Realizamos una operación donde se ingresa una secante multiplicada por una cotangente dando como resultado una cosecante
	return x;
}

int main (){
	float a,b;
	printf("Ingrese el valor a evaluar:\n ");
	scanf("%f",&b);
	a= f(b);// llamamos a la funcion
	printf("El valor de la funcion cosecante en radianes es:\n%4.2f radianes",a);
	return 0;
}
