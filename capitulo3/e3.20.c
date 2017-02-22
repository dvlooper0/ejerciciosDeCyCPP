#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//El interes simple de un prestamo se calcula mediante la formula:
	//
	//	interest = principal * rate * days / 365
	//
	//La formula anterior supone que rate es la tasa de interes anual y, por lo tanto, incluye la division entre 365 (dias).
	//Desarolle un programa en C que introduzca principal, rate, y days por varios prestamos diferentes, y calcule y 
	//despliegue el interes simple para cada uno de ellos, mediante el uso de la formula anterior.
	
	float principal=0,
	      rate=0,
	      interest=0;

	     int days=0;


	while(principal!=-1){

		printf("\n\nEnter loan principal (-1 to end): ");
		scanf("%f",&principal);

		if(principal!=-1){

			printf("Enter interest rate: ");
			scanf("%f",&rate);

			printf("Enter term of the loan in days: ");
			scanf("%d",&days);

			interest = principal * rate * days / 365;

			printf("The interest charge is $%.2f",interest);
		}
	}

}
