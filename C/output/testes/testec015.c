/*
Desvio condiconal de multiplos casos
switch()
Exercício 0015 - Desvio Condicional de Múltiplos Casos
*/

#include "stdio.h"


int main()
{
	int codigo;

	printf("Digite o codigo 1:panela , 2:chaleira . 3:prato: ");
	scanf("%d", &codigo);

	// Usando switch
	switch (codigo)
	{
	case 1:
		printf("Panela \n");
		break;
	case 2:
		printf("Chaleira \n");
		break;
	case 3:
		printf("Prato \n");
		break;
	default:
		printf("O codigo digitado invalido! \n");
		break;
	}


    return 0;
}
