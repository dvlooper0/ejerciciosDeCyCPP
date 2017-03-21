#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Utilizando un metodo similar al del Ejercicio 3.26, encuentre los dos valores mas grandes de los 10 numeros.
	//
	//	Nota: Solo puede introducir una vez el numero.
	
	int nX=0,
	    nMayor=0,
	    n2doMayor=0;

	printf("Introduzca un numero: ");
	scanf("%d",&nX);

	printf("nX\tnX+2\tnX+4\tnX+6\n");

	while(nX <= 10 ){

		printf("%d\t%d\t%d\t%d\t\n",nX,nX+2,nX+4,nX+6);
		nX++;

		if(nX > nMayor){
			n2doMayor=nMayor;
			nMayor=nX;
		}
	}	
	
	printf("Los dos valores mas grandes de los 10 numeros son: %d y %d\n",nMayor,n2doMayor);

}
