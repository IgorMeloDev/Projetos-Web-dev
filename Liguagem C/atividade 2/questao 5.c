/*questao 5.cpp
Faça um programa (utilizando a estrutura for) que leia 10 valores inteiros e:
a. Encontre e mostre o maior valor.
b. Encontre e mostre o menor valor.
c. Calcule e mostre a media dos numeros lidos.*/
#include <stdio.h>

int main() {
    int valores[10]; //quantidade de valores 
    int i, maior, menor;
    float soma = 0.0;

    
    for (i = 0; i < 10; i++) {
        printf("Digite o %d ---->: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; // guardando para saber a quantidade da saoma dos valores
    }

    // Inicializando maior e menor com o primeiro valor
    maior = menor = valores[0];

    // Encontrando o maior e menor valor
    for (i = 1; i < 10; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    // Calculo da media
    float media = soma / 10;

    // Exibindo os resultados
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}

