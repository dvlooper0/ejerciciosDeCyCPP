#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Escriba un programa en C que utilice ciclo para producir la siguiente tabla de valores.
	//
	//	A	A+2	A+4	A+6
	//	3	5	7	9
	//	6	8	10	12
	//	9	11	13	15
	//	12	14	16	18
	//	15	17	19	21
	
	int a=3;

	printf("A\tA+2\tA+4\tA+6\n");

	while(a <=15){

		printf("%d\t%d\t%d\t%d\n",a,a+2,a+4,a+6);
		a+=3;
	}

}
