#include  <stdio.h>
#include <stdlib.h>
#define A 10
 
 void valores(int*);
 
 int main(){

int arreglo[A]={20,15,10,5,35,40,30,50,25,45};
int i, key, j;
printf("\t\t***Ordenamiento por Inserci%cn***\n\n",162);
	for(i =1;i<A;i++)
	{
	key =*(arreglo+i);
	j=i-1;
	  while(j>=0&& *(arreglo+j)>key)
		{
	     *(arreglo+j+1)= *(arreglo+j);
	     j=j-1;
		}
	*(arreglo+j+1)= key;
	valores(arreglo);
	}	

printf("\t[Ordenado y finalizado]");
return 0;	 
 }
 void valores(int *lista)
 {
   int i;
   for(i=0;i<A;i++)
    {
     printf(" (%d) ", *(lista+i));
    }
printf("\n");
 }
