
//
/*
	EXercicio 0011 - Ler um numero e compare com 1000

*/
#include <stdio.h>


int main()
{
	int numero;

	// Entrada
	printf("Digite um numero: ");
	scanf("%d", &numero);

	// Comparacao 
	if (numero > 1000)
		printf("O numero %d e maior do que 1000! \n", numero);
    else
        printf("O numero %d e menor ou igual a 1000! \n", numero);
    return 0;
}