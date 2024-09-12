#include <stdio.h>// biblioteca 
//Exercício 3: Par ou Ímpar 
int main(void) {  //Inicio
    int numero;

    // Pede a informação pro usuario
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh ímpar.\n", numero);
    }

    return 0;
}
