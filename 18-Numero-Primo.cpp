#include <stdio.h>

int main()
{ int n,div,aux;
    printf("\t\t---Numeros Primos---\n");
    printf("Ingrese un numero:\n");
    scanf("%d",&n);
    div=2;
    aux=0;

    while(div<n)
    {
        if(n%div==0){
        aux=1;
        }
        div=div+1;
    }
        if(aux==0)
        printf("Es Primo\n");
        else
        printf("No es Primo\n");

return 0;
}
