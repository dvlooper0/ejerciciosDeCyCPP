#include <stdio.h>

void main(){

	//Escriba un programa que lea dos enteros y determine e imprima si el primero es un multiplo del segundo.
	// (Sugerencia: utilice el operador de modulo).
	
	int n1=0,n2=0;

	printf("Introduzca el primer numero.\n");
	scanf("%i",&n1);

	printf("Introduzca el segundo numero.\n");
	scanf("%i",&n2);

	if(n1%n2==0)
		printf("El primer numero es multiplo del segundo.\n");
		  

}
