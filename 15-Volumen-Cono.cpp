#include <stdio.h>
#define PI 3.141592
#define VOLCONO(radio, altura) (PI*(radio*radio)*altura)/3

int main(){
	float radio,altura,volumen;
	printf("Ingrese el radio del cono: ");
	scanf("%f",&radio);
	printf("Ingrese la altura del cono: ");
	scanf("%f",&altura);
	volumen=VOLCONO(radio,altura);
	printf("El volumen del cono es:%.2f ",163,volumen);

return 0;
}
