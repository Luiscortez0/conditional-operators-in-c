//objetivo: leer un numero e indentificar si es negativo, positivo o neutro
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	//variables
	int x;
	
	//entrada
	printf("ingresa un numero: ");
	scanf("%i",&x);
	
	//proceso
	if(x==0){
		printf("el numero es neutro\n");
	}else{
		if(x>0){
			printf("el numero es positivo\n");
		}else{
			printf("el numero es negativo\n");
		}
	}
}
