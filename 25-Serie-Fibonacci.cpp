#include <stdio.h>

int fib(){
	static int a=0;
	static int b=1;


	b=b+a;
	a=b-a;
	
	return a;
	
}
int main(){
    int i,n;
	printf("\t\tSERIE FIBONACCI\n");
	printf("\nINGRESE EL NUMERO DE VALORES A PRESENTAR EN LA SERIE:");
	printf("\n-----------------------------------------------------\n");
	scanf("%d",&n);
	printf("-----------------------------------------------------\n");
	
	for(i=1;i<=n;i++){
		printf("%i\n",fib());
			
	}
	return 0;
}
