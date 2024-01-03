//objetivo: leer tres numeros y imprimirlos de mayor a menor
//autor: luis carlos cortez guzman
//fecha: 20/10/2021

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//variable
	int n1,n2,n3;
	
	//entrada
	printf("ingresar un numero:");
	scanf("%d",&n1);
	printf("ingresar otro numero:");
	scanf("%d",&n2);
	printf("ingresar el ultimo numero:");
	scanf("%d",&n3);
	
	//proceso
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf("\n%d",n1);
			printf("\n%d",n2);
			printf("\n%d",n3);
		}else{
			printf("\n%d",n1);
			printf("\n%d",n3);
			printf("\n%d",n2);
		}
	}
	if(n2>n1 && n2>n3){
		if(n1>n3){
			printf("\n%d",n2);
			printf("\n%d",n1);
			printf("\n%d",n3);
		}else{
			printf("\n%d",n2);
			printf("\n%d",n3);
			printf("\n%d",n1);
		}
	}
	if(n3>n1 && n1>n2){
		if(n1>n2){
			printf("\n%d",n3);
			printf("\n%d",n1);
			printf("\n%d",n2);
		}else{
			printf("\n%d",n3);
			printf("\n%d",n2);
			printf("\n%d",n1);
		}
	}	
}
