 //Exercício 6:Cálculo de média 
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Pede 3 notas para o Aluno :
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das três notas
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe a média
    printf("A media do aluno eh: %.2f\n", media);

    // Verifica a situação do aluno
    if (media < 5.0) {
        printf("Reprovado.\n");
    } else if (media >= 5.0 && media <= 7.0) {
        printf("Recuperacao.\n");
    } else {
        printf("Aprovado.\n");
    }

    return 0;//Fim
}
