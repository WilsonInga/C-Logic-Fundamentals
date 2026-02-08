#include <stdio.h>
#include <math.h>

int max( int num,int num1){
	int a;
	if(num>num1){
		a=num;
	}
	else{
		a=num1;
	}
	return a;
}

int main(){
	int n,b,c;
	printf("Pimer n%cmero:\n",163);
	scanf("%d",&n);
	printf("Segundo n%cmero:\n",163);
	scanf("%d",&b);
	c=max(n,b); //En esta linea lee la funcion max
	printf("El n%cmero mayor valor  es:%d",163,c);
	
	return 0;
	
}
