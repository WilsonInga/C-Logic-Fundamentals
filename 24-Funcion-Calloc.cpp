#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *a;

   printf("Numero de elementos a ingresar:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Ingresa %d numeros:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("Los numeros ingresados son: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}
