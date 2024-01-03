//objetivo: indicar si eres mayor o menor de edad
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	//variables
	int edad;
	
	//entrada
	printf("ingresa tu edad: ");
	scanf("%d",&edad);
	
	//proceso
	if(edad>18){
		printf("eres mayor de edad ");
	}else{
		printf("eres menor de edad ");
	}
}
