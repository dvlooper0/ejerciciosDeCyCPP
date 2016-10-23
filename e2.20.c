#include <stdio.h>

const pi = 3.14159;

void main(){

/*
 * Escriba un programa que lea el radio de un circulo y que imprima el diametro  del mismo, su
 * circunferencia y su área. Utilice el valor constante 3.14159 para "pi". Efectúe cada uno de estos calculos
 * dentro del enunciado o enunciados printf y utilice el especificador de converción %f. (Nota: en este
 * capítulo, hemos estudiado únicamente constantes y variables enteras. En el capitulo 3 veremos numeros de 
 * punto flotante, es decir, valores que pueden tener puntos decimales).
 */

	int radio=0;

	printf("Introduce el radio del circulo: ");
	scanf("%d", &radio);

	

	printf("El diametro del circulo es: %d \n",2 * radio);
	printf("La circunferencia  del circulo es: %d \n",2 * pi * radio); 	 	
	printf("El area del circulo es: %d \b \n",pi * (radio * radio));

}
