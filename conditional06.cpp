//objetivo: indicar si una vocal es fuerte o debil
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	
	//datos
	char v;
	
	//pedir vocal
	printf("escribe una vocal");
	scanf("%c",&v);
	
	//saber si es vocal
	if(v=='a' || v=='e' || v=='o'){
		printf("la vocal %c pertenece alas fuertes",v);
	}else{
		printf("la vocal %c pertenece alas debiles",v);
	}
}
