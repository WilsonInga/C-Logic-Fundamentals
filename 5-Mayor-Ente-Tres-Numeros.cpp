#include <stdio.h>

int main(){
	int a,b,c;
	printf("Ingrese a:\n");
	scanf("%d",&a);
	printf("Ingrese b:\n");
	scanf("%d",&b);
	printf("Ingrese c:\n");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
		printf("Mayor es A");
		}
		else{
		printf("Mayor es C");
		}	
	}
	else if (b>c){
		printf("Mayor es B");
	}else {
		printf("Mayor es C");
	}
	return 0;
}
