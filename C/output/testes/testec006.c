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
/*atividade pedindo para o usuario escolher as notas 
#include <stdio.h> // Biblioteca padrão

int main() {
    float nota1, nota2, nota3, media; // Declaração das variáveis

    // Solicitar ao usuário as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Apresentando a média
    printf("A média do aluno: %.2f\n", media);

    return 0;
}*/