#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//En razon del alto precio de la gasolina, los conductores estan preocupados con el kilometraje que 
	//obtienen de sus automoviles. Un conductor ha llevado registro de varios tanques de gasolina, anotanto 
	//las millas manejadas y los galones utilizados en cada uno de los tanques. Desarolle un programa en C 
	//que introduzca las millas manejadas y los galones utilizados para cada tanque. El programa debe 
	//calcular y desplegar las millas por galon obtenidas de cada tanque. Despues de procesar toda la 
	//informacion de entrada, el programa debera calcular e imprimir las millas por galon combinadas, 
	//obtenidas de todos los tanques (promedio).
	
	float millas=0,
	    sumaMillas=0,
	    galones=0,
	    sumaGalones=0;
	
	while(millas!=-1){

		printf("Introduzca las millas recorridas (Introduzca -1 para salir.)\n");
		scanf("%f",&millas);

		if (millas != -1){
			printf("Introduzca los galones utilizados\n");
			scanf("%f",&galones);

			printf("Rendimiento millas por galones: %f\n",galones/millas);
		
			sumaMillas+=millas;
			sumaGalones+=galones;
		}

		else
			printf("Rendimiento promedio millas por galones: %f\n",sumaGalones/sumaMillas);


	}

}
