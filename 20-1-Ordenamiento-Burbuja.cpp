#include <stdio.h>

int main()
{
	int elemento[]={50, 20, 40, 80,30};
	int i, n, p;
	printf("DESORDENADO:\n");
	for(i=0;i<5;i++){
		printf("°%d° ",elemento[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		for(n=0;n<5;n++){
			if(elemento[n]>elemento[n+1])
			{
			p=elemento[n];
			elemento[n]=elemento[n+1];
			elemento[n+1]=p;
			}
		}
	}
	printf("ORDENADO:\n");
	for(i=0;i<5;i++){
		printf("°%d° ",elemento[i]);
	}
return 0;
}
