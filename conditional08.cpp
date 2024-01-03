//objetivo: indicar si la letra es vocal o consonante
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	
	//variable
	char letra;
	
	//entrada
	printf("ingresar una letra:");
	scanf("%c",&letra);
	
	//proceso
	if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
		printf("la letra %c es vocal",letra);
	}else{
		printf("la letra %c es consonante",letra);
	}
}
