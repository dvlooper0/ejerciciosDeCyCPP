#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Una gran empresa quimica paga a su personal de ventas en base a compesaciones. El personal de ventas
	//recibe $200 por semana mas %9 de las ventas brutas de esa semana. Por ejemplo, una persona de ventas
	//que vende $5000 de productos quimicos en una semana, recibe $200 mas 9% de $5000, o sea un total de 
	//$650.
	//
	//Desarrolle un programa en C que introduzca las ventas brutas de cada vendedor correspondiente a la 
	//ultima semana, y calcule y despliegue las ganancias de dicho vendedor. Procese las cifras vendedor 
	//por vendedor.
	
	float sales = 0,
	      salary =0;

	while(sales!=-1){

		printf("\nEnter de sales in dollars (-1 to end): ");
		scanf("%f",&sales);

		if(sales!=-1){
			salary=200+sales*.09;
			printf("\nSalary is: %.2f",salary);
		}
	}

}
