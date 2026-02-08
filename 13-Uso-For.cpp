#include <stdio.h>

int main() {
	int a;
	int num;
	printf("Ingrese un numero: ",163);scanf("%d",&num);
	
	for (a=1;a<=10;a++) {
		printf("%dx%d=%d\n",num,a,num*a);
	}
	return 0;
}

