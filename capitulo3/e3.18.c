#include <stdio.h>

void main(){

	//tw: @dvlooper e: dev.soft527@gmail.com
	
	//Desarrolle un programa en C que determine si un cliente de una tienda departamental ha excedido el limite de credito en 
	//una cuenta de cargo. Para cada uno de los clientes, estan disponibles los siguientes hechos:
	//
	//	1.-Numero de la cuenta.
	//	2.-Saldo al principio del mes.
	//	3.-Total de todos los elementos cargados por el cliente este mes.
	//	4.-Total de todos los creditos aplicados este mes a la cuenta de este cliente.
	//	5.-Limite permitido de credito.
	//
	//El programa debera introducir cada uno de estos hechos, calcular el nuevo saldo (= saldo inicial + cargos - creditos),
	//y determinar si el nuevo saldo excede el limite de credito del cliente. Para aquellos clientes cuyo limite de credito este
	//excedido, el programa debera desplegar el numero de cuenta del cliente, el limite de credito, el nuevo saldo y el mensaje
	//"limite de credito excedido".
	
	int accountNumber=0;
	float beginningBalance=0,
	      totalCharges=0,
	      totalCredits=0,
	      creditLimit=0,
	      balance=0;

	while(accountNumber!=-1){

		printf("\nEntere account number: ");
		scanf("%d",&accountNumber);	

		if(accountNumber!=-1){
			printf("\nEnter beginning balance: ");
			scanf("%f",&beginningBalance);
			printf("\nEnter total charges: ");
			scanf("%f",&totalCharges);
			printf("\nEnter total credits: ");
			scanf("%f",&totalCredits);
			printf("\nEnter credit limit: ");
			scanf("%f",&creditLimit);

			balance=beginningBalance+totalCharges-totalCredits;

			printf("\n----------\n");
			printf("Account:\t %d\n",accountNumber);
			printf("Credit limit:\t %.2f\n",creditLimit);
			printf("Balance:\t %.2f\n",balance);
			printf("\n----------\n");

			if(balance>creditLimit)
				printf("\n\aCredit Limit Exceeded\n");
		}
	}
}

