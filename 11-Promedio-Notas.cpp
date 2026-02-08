#include <stdio.h>

int main(){
	
	float a,acum,media;
	int nota;
	printf("Ingrese Nota\n");
	scanf("%f",&a);
	nota=0;
	acum=0;
	while (a!=0){
		acum=acum+a;
		nota=nota+1;
		scanf("%f",&a);
	}
	media= acum/nota;
	printf(" El promedio es :%4.1f",media);
	
	return 0;
	
}
