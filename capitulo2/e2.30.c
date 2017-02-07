#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Escriba un programa que entre un numero de cinco digitos, separe el numero en sus digitos
	//individuales e imprima los digitos separados unos de otros mediante tres espacios.
	//Por ejemplo, si el usuario escribe 42339 el programa deberia imprimir 4   2   3   3   9.
	
	int n=0, 
	    n0=0,
	    n1=0,
	    n2=0,
	    n3=0,
	    n4=0;

	printf("Introduzca un numero de 5 digitos \n");
	scanf("%d",&n);

	n0=n%10;
	n0=n/10;

	n1=n%10;
	n=n/10;

	n2=n%10;
	n=n/10;

	n3=n%10;
	n=n/10;

	n4=n%10;
	n=n/10;

	printf("%d   %d   %d   %d   %d \n",n,n4,n3,n2,n1,n0);

	
}
