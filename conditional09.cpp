//objetivo: leer un numero entre el 1 y el 12 e imprimir el mes correspondiente
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>

int main(){
	
	//variables
	int numero;
	
	//entrada
	printf("ingrese el numero del mes: ");
	scanf("%d",&numero);
	
	//procedimiento
	switch(numero){
		case 1:
			printf("el mes es: enero");
	    break;
	    case 2:
			printf("el mes es: febrero");
	    break;
	    case 3:
			printf("el mes es: marzo");
	    break;
	    case 4:
			printf("el mes es: abril");
	    break;
	    case 5:
			printf("el mes es: mayo");
	    break;
	    case 6:
			printf("el mes es: junio");
	    break;
	    case 7:
			printf("el mes es: julio");
	    break;
	    case 8:
			printf("el mes es: agosto");
	    break;
	    case 9:
			printf("el mes es: septiembre");
	    break;
	    case 10:
			printf("el mes es: octubre");
	    break;
	    case 11:
			printf("el mes es: noviembre");
	    break;
	    case 12:
			printf("el mes es: diciembre");
	    break;
	}
}
