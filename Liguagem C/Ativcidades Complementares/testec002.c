#include <stdio.h>  // Biblioteca int main()
int main(void)
{
	int num;

	// Entrada
	printf("Digite um numero:............");
	scanf_s("%d", &num);

	// Desvio Condicional Composto
	if (num > 0)
		printf("POSITIVO \n");
	else if(num<0)
		printf("NEGATIVO \n");
	else
		printf("ZERO \n");

    return 0;
}