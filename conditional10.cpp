//objetivo: un men� de operaciones aritm�ticas (1. Suma, 2. Resta, 3. Multiplicaci�n, 4. Divisi�n). Y solicite al usuario el n�mero de operaci�n que dese� ejecutar. Despu�s solicitar dos enteros y seg�n la opci�n seleccionada, realizar la operaci�n y mostrar el resultar.
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	
	//variables
	int n1,n2,resultado,operacion;
	
	//menu
	printf("\n/menu de operaciones/\n");
	printf("\nsuma: 1");
	printf("\nresta: 2");
	printf("\nmultiplicacion: 3");
	printf("\ndivision: 4\n");
	printf("\ningrese el numero de la operacion deceada: ");
	scanf("%d",&operacion);
	printf("\ningrese un numero entero: ");
	scanf("%d",&n1);
	printf("\ningrese el segundo numero entero: ");
	scanf("%d",&n2);
	
	//proceso
	if(operacion==1){
		resultado = n1 + n2 ;
		printf("la suma es: %d",resultado);
	}
	if(operacion==2){
		resultado = n1 - n2 ;
		printf("la resta es: %d",resultado);
	}
	if(operacion==3){
		resultado = n1 * n2 ;
		printf("la multiplicacion es: %d",resultado);
	}
	if(operacion==4){
		resultado = n1 / n2 ;
		printf("la divicion es: %d",resultado);
	}
}
