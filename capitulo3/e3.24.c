#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//El proceso de encontrar el numero mas grande (es decir, el maximo de un grupo de numeros), es utilizado con frecuencia
	//en aplicaciones de computacion. Por ejemplo, un programa que determina el ganador de un concurso de ventas, introducira 
	//el numero de unidades vendidas por cada vendedor. El vendedor que hubira vendido la mayor cantidad de unidades, ganaria el 
	//concurso. 
	//
	//Escriba un programa primero en pseudocodigo y a continuacion en C, que introduzca una serie de 10 numeros,
	//y determine e imprima el mayor numero de los mismos. 
	//
	//	Sugerencia: Su programa deberia de utilizar tres variables como sigue:
	//
	//		counter:	Un contador para contar hasta 10 (es decir, para controlar cuantos numeros han sido introducidos,
	//			 	y para determinar cuando se han procesado todos los 10 numeros).
	//
	//		number:  	El numero actual introducido al programa.
	//
	//		largest:	El numero mas grande encontrado hasta ahora.
	
	int counter=1,
	    number=0,
	    largest=0;

	while(counter <= 10){
	
		printf("\nIntroduzca un numero:");
		scanf("%d",&number);

		if(number > largest)
			largest=number;
	
	counter++;
	}

	printf("\nEl numero mas grande introducido fue: %d\n",largest);
	

}
