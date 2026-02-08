#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "Programacion");
   printf("Cadena = %s,  Direccion = %d\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".epn.edu.ec");
   printf("Cadena = %s,  Direccion = %d\n", str, str);

   free(str);
   
   return(0);
}
