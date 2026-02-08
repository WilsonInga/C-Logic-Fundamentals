//Números aleatorios de cantidad máxima 10 numeros comprendidos entre n valores

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{

        int i, cantidad, I, S; 

        srand(time(NULL));
        printf("Ingrese el valor inferior:");
        scanf("%d",&I);
        printf("Ingrese el valor superior:");
        scanf("%d",&S);
        
        for (i = 0; i < 15; i ++) 
        {
            cantidad = I+(int)(((S-I+1)*rand())/(RAND_MAX+1));
            
            printf("%d\n", cantidad);
            printf("---\n");
        }
        
        return 0;
    }
