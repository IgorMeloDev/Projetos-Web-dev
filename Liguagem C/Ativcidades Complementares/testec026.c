/*Exercício 0026 // deu erro ver dps
Escreva um programa que leia numeros inteiros.
Escrever - no final - a media dos numeros.
a - Fazer a pergunta: "Deseja digitar outro numero: (s/n)?";
b - Resposta 's', o while continua;
c - Resposta 'n', sai do laço;
d - Ao sair do laço, calcular a media do numeros digitados;
e - Escrever na tela a media;
*/

#include <stdio.h>

int main() {
    // Declarar variaveis
    int num, soma = 0, qtdLido = 0;
    float media;
    char resposta;

    // While loop
    do {
        printf("Digite um numero: \n");
        scanf("%d", &num);  // Lê o número

        soma += num;        // Acumula a soma
        qtdLido++;          // Incrementa o contador

        // Perguntar se quer continuar a digitar um numero
        printf("Deseja digitar outro numero: (s/n)? ");
        scanf(" %c", &resposta);  // Lê a resposta (espaço antes do %c para ignorar espaços em branco)

        printf("\n");
    } while (resposta == 's');

    // Calcula a média
    if (qtdLido > 0) {
        media = ((float)soma / (float)qtdLido);  // Cast para float
        printf("A media dos numeros e: %.2f \n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}