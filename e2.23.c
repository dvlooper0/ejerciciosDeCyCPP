#include <stdio.h>

void main(){

int	menor=1,
	mayor=0,
	nX=0;

printf("\n\nIntroduce 5 numeros, al final sabras cual es el menor y mayor de ellos.\n");

printf("No.1 :");
scanf("%d",&nX);

nX<menor?menor=nX:0;
nX>mayor?mayor=nX:0;

printf("No.2 :");
scanf("%d",&nX);

nX<menor?menor=nX:0;
nX>mayor?mayor=nX:0;

printf("No.3 :");
scanf("%d",&nX);

nX<menor?menor=nX:0;
nX>mayor?mayor=nX:0;

printf("No.4 :");
scanf("%d",&nX);

nX<menor?menor=nX:0;
nX>mayor?mayor=nX:0;

printf("No.5 :");
scanf("%d",&nX);

nX<menor?menor=nX:0;
nX>mayor?mayor=nX:0;

printf("El menor es: %d \n",menor);
printf("El mayor es: %d \n",mayor);

}
