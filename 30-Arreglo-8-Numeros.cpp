#include <stdio.h>
#define NUM 8
int main (){
	int nums[NUM];
	int i;
	int total=0;
	for(i=0;i<NUM;i++){
		puts("Por favor introduzca el numero: ");
		scanf("%d",&nums[i]);
	}
	puts("\nlista de numeros: ");
	for (i=0;i<NUM;i++){
		printf("%d\t",nums[i]);
		total+=nums[i];
	}
	printf("\nLa suma de los numeros es: %d", total);
return 0;
}

