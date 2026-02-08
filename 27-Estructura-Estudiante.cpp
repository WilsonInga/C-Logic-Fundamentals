#include <stdio.h>
struct estudiante
{
	char Nombre[41];
	int Num_Estudiante;
	int Anyo_de_matricula;
	float Nota;
};

int main()
{
	struct estudiante *ptr_est;
	struct estudiante mejor;
	ptr_est= &mejor; /*ptr_est tien la dirección(apunta a)mejor */
	strcpy(ptr_est -> Nombre, "Pedro Ladrillo");
	ptr_est -> Num_Estudiante =3425;
	ptr_est -> Nota =8.5;
	printf("\nNombre:%s",mejor.Nombre);
	printf("\nNumero:%d",mejor.Num_Estudiante);
	printf("\nNota:%0.2f",mejor.Nota);
}
