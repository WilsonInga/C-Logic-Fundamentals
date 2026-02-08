#include <stdio.h>

int main(){
	
	float num;
	printf ("Ingrese un numero:\n");
	scanf("%f",&num);
	
	num=num*30.48;
	printf("El numero transformado a pies es:%4.2f", num);
	
	return 0;

}
