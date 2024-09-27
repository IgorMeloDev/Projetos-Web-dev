//questao 3.cpp

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite;
    
    // Inicializa o gerador de numeros aleatorios
    srand(time(NULL));
    numeroSecreto = rand() % 50 + 1; // Gera n�mero entre 1 e 50

    printf("Bem-vindo ao jogo da loteria!\n.....\t.....\t.....\t.....\t.....\t.....\n");
    printf("Tente adivinhar o numero secreto entre 1 e 50.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite > numeroSecreto) {
            printf("Seu palpite eh maior que o numero secreto.\n");
        } else if (palpite < numeroSecreto) {
            printf("Seu palpite eh menor que o numero secreto.\n");
        } else {
            printf("Parabens! Voce acertouuuuuuu!!!\n Voce e muito bom\n O Numero eh: %d\n", numeroSecreto);
        }

    } while (palpite != numeroSecreto);

    return 0;
}

