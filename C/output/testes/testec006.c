/*
	Exercício 006
	Declaração de média
*/

#include <stdio.h> //biblioteca padrão



int main()
{
	float nota1, nota2, nota3, media;   // Declaraçao das variaveis

	// Inicializacao das variaveis
	nota1 = 7.3;
	nota2 = 8.7;
	nota3 = 6.8;
	media = (nota1 + nota2 + nota3) / 3;

	// Apresentando a media

	printf("A media do aluno: %.2f \n", media);

	
    return 0;
}