#include <stdio.h>  // Biblioteca padrão 

int main(void) {
    int numero;  // Variável 
    // Pede informação para o usuario
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);  // Lê o número 

    // Verifica se o número é positivo, negativo ou zero
    if (numero > 0) {
        printf("O numero e positivo.\n");
    } else if (numero < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }

    return 0;  // FIM
}
