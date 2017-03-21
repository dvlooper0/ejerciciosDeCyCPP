#include <stdio.h>

int main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Modifique el programa de la figura 3.10 para validar sus entradas. En cualquier entrada, si el valor introducido
	//es diferente que uno o dos, siga ciclando hasta que el usuario introduzca un valor correcto.
	
	/*Analysis of examination results*/

	/* initializing variables in declararions */
	int passes = 0, failures = 0, student = 1, result;

	/* process 10 students; counter-controlled loop*/
	while (student <= 10) {
		printf("Enter result (1=pass,2=fail): ");
		scanf("%d", &result);

		if (result == 1)		/* if/else nested in while */
			passes = passes + 1; 
		if (result == 2) 
			failures = failures + 1;

		if(result == 1 || result == 2)
			student = student + 1;
	}

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	if (passes > 8)
		printf("Raise tuition\n");

	return 0;	/* successful termination */
}
