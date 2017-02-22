#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Desarrolle un programa en C que determine la nomina bruta para cada uno de varios empleados.
	//La empresa paga "tiempo normal" para las primeras 40 horas trabajadas de cada empleado y 
	//paga "tiempo y medio" para todas las horas trabajadas en exceso de 40 horas. Se le proporciona
	//una lista de los empleados de la empresa, el numero de horas que cada empleado trabajo la ultima 
	//semana, y la tasa de horaria de cada empleado. Su programa debera introducir esta informacion para
	//cada uno de los empleados, y determinar y desplegar la nomina bruta de ellos.
	
	int hoursWorked = 0;

	float hourlyRate = 0,
	      salary=0;

	while(hoursWorked != -1){

		printf("\nEnter # of hours worked (-1 to end): ");
		scanf("%d",&hoursWorked);

		if(hoursWorked != -1){

			printf("Enter hourly rate of the worker ($00.00): ");
			scanf("%f",&hourlyRate);

			if(hoursWorked >= 41)

				salary = hoursWorked * hourlyRate  * 1.5;

			else 

				salary = hoursWorked * hourlyRate; 

		}
	}
}
