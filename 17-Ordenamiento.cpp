#include <stdio.h>

int main(){
	
	int k,n,aux;
	int arreglo[7]={9,11,5,1,3,7};
	printf("\t\t**ORDENAMIENTO**\n");
	puts("El arreglo en desorden es:");
	for(n=0;n<6;n++){
		printf("%d ",arreglo[n]);
	}
	printf("\n");
	for(int i=0;i<5;i++){
		k=i;
		aux=arreglo[i];
		for(int l=i+1;l<6;l++){
			if(arreglo[l]<aux){
				k=l;
				aux=arreglo[k];
			}
		}
		arreglo[k]=arreglo[i];
		arreglo[i]=aux;
	}
	puts("El arreglo en orden es:");
	for(k=0;k<=5;k++){
		printf("%d ",arreglo[k]);
	}
return 0;
}
