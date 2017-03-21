#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Que es lo que imprime el programa siguiente?
	
	int row = 10, column;

	while (row >= 1){
		column = 1;

		while (column <= 10){
			printf("%s",row % 2 ? "<" : ">");
			++column;
		}

		--row;
		printf("\n");
	}
}
