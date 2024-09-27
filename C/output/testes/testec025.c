// Exercicio_0025.cpp : 
//

#include "stdio.h"


int main()
{
	// Declaracao de variaveis
	int somaPos = 0, somaNeg = 0, num = 1;

	num != 0;
	// Laco while (quantidade indeterminada de repeticoes)
	while (num != 0)
	{
		printf("Digite um numero: \n");
		scanf("%d", &num);
		if (num > 0)
			somaPos = somaPos + num;
		else if (num < 0)
			somaNeg = somaNeg + num;
		else
			num = 0;
	}

	printf("O resultado da soma de positivos:..........%d \n", somaPos);
	printf("O resultado da soma de negativos:..........%d \n", somaNeg);

    return 0;
}
