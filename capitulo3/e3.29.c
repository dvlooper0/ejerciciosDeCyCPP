#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Que es lo imprime el programa siguiente?
	
	int count = 1;

	while(count <= 10){
		printf("%s",count % 2 ? "****" : "++++++++");
		++count;
	}
	
	/* c 1 *
	 * c 2 +
	 * c 3 *
	 * c 4 +
	 * c 5 *
	 * c 6 +
	 * c 7 *
	 * c 8 +
	 * c 9 *
	 * c 10+
	 */
}
