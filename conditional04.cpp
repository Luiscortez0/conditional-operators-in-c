//objetivo: leer dos numeros e indicar cual es mayor o si son iguales
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	//variables
	int x,y;
	
	//entrada
	printf("ingresa un numero: ");
	scanf("%i",&x);
	printf("ingresa nuevamente un numero: ");
	scanf("%i",&y);
	
	//proceso
	if(x==y){
		printf("los dos numeros son iguales\n");
	}else{
		if(x>y){
			printf("el numero mayor es %i\n",x);
		}else{
			printf("el numero mayor es %i\n",y);
		}
	}
}
