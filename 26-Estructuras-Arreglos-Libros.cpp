#include  <stdio.h>
#include  <ctype.h>
#include <stdlib.h>

struct inventario
{
	char titulo[25];
	char fecha_pub[20];
	char autor[30];
	int num;
	int pedido;
	float precio_venta;
};
	
typedef struct inventario Inventario;
int main()
{
	Inventario libro[100];
	int total = 0;
	char resp,b[21];
	int i,n;
	do{
	    printf("-------------------------------------\n");
		printf("Total libros %d \n",(total+1));
		printf(".Cual es el  titulo?: ");
		gets(libro[total].titulo);
		printf(".Cual es la fecha de publicacion?: ");
		gets(libro[total].fecha_pub);
		printf(".Quien es el autor?: ");
		gets(libro[total].autor);
		printf(".Cuantos libros existen?: ");
		scanf("%d",&libro[total].num);
		printf(".Cuantos ejemplares estan pedidos?: ");
		scanf("%d%*c",&libro[total].pedido);
		printf(".Cual es el precio de venta?: ");
		gets(b);
		libro[total].precio_venta = atof(b);
		printf(".Hay mas libros? (S/N)");
		scanf("%c%*c",&resp);
		resp = toupper(resp);
		if(resp=='S')
		{
			total++;
			continue;
		}
	}while (resp == 'S');
	return 0;
	}
	
