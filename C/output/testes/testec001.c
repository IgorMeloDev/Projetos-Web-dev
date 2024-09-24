// revisão para prova
#include <stdio.h>  // Biblioteca 

//soma de duas variaveis pedindo as variáveis para o usuario
int main()
{
	int valorA, valorB, soma;  // Declaracao das variaveis

	printf("Digite um numero: ");   // Entrada de dados
	scanf("%d", &valorA);
	printf("Digite outro numero: ");
	scanf("%d", &valorB);

	soma = valorA + valorB;   // Processamento de dados	

	printf("A soma foi: %d \n", soma);     // Saida de dados
	printf("%d + %d = %d \n", valorA, valorB, soma);

	
    return 0;
}

