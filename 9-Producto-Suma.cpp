#include <stdio.h>

int main(){
	int a,b;
	printf("Ingresar a\n");
	scanf("%d",&a);
	printf("Ingresar b\n");
	scanf("%d",&b);
	if (a==b){
		printf("los numeros son iguales");
	}
    else if(a>b){
		printf("Mayor es A");
	}
	else{
		printf("Mayor es B");		
	}
return 0;	
}
