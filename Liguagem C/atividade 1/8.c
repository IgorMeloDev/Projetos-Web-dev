//Exercicio 8: VERIFICAR ANO BISSEXTO
#include <stdio.h>

int main() {
    int ano;

    // Solicita o ano ao usuário
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d eh bissexto.\n", ano);
    } else {
        printf("O ano %d nao eh bissexto.\n", ano);
    }

    return 0;
}

