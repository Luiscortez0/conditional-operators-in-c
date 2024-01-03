//objetivo: indicar si un numero es mayor a 5 o no
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	//variables
	int numero;
	
	//entrada
	printf("ingresa un numero: ");
	scanf("%d",&numero);
	
	//proceso
	if(numero>5){
		printf("el numero es mayor que 5 ");
	}else{
		printf("el numero es menor que 5");
	}
}
