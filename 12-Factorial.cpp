#include <stdio.h>

int main() {
	int cantidad,factor,n,s,c;
	printf("Ingrese el valor\n");
	scanf("%d",&n);
	
	factor=1;
	cantidad=1;
	if(n>=1){
		do{
			factor=factor*cantidad;
			cantidad=cantidad+1;
		}
		while (cantidad!=n+1);
		printf("Su factorial es de:%d\n",factor);
		
		
		
	}
	
	else{
		printf("No existe factorial");
	}

	printf("la suma de los numeros del factorial es:%d",n*factor);
return 0;
}


