//objetivo: indicar si un numero es par o impar
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	
	//datos
	int n;
	
	//pedir numero
	printf("escribe un numero: ");
	scanf("%i",&n);
	
	//proceso
    if(n%2==0){
	printf("el numero %i es par",n);
	}else{
	printf("el numero %i es impar",n);
	}
}
