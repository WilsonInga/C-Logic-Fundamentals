#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	printf("Ingrese el n%cmero de personas:",163);
	scanf("%i",&n);
	int ingreso[n];
	
	struct persona{
		char nombre_per[10];
		char apellido_per[10];
		char fecha_per[20];
		char edad[10];
	}per[n];
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Ingrese el primer nombre de la persona ingresada:");
		gets(per[i].nombre_per);
		printf("Ingrese el primer apelldo de la persona:");
		gets(per[i].apellido_per);
		printf("Ingrese la fecha de nacimiento de la persona ingresada:");
		gets(per[i].fecha_per);
		printf("Ingrese la edad de la persona:");
		gets(per[i].edad);
		printf("*********************************************************\n");
	}
	printf("\t\t*REGISTRO DE MIEMBROS*");
	for (i=0;i<n;i++){
		printf("\n\t-Nombre de la persona: %s",per[i].nombre_per);
		printf("\n\t-Apellido de la persona: %s",per[i].apellido_per);
		printf("\n\t-Fecha de nacimiento: %s",per[i].fecha_per);
		printf("\n\t-Edad:%s",per[i].edad);
		printf("\n......................................................");
	}
return 0;
}
