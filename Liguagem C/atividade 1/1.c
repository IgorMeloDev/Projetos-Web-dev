#include <stdio.h>  // Biblioteca 

int main(void) {
    int idade;  // Variável 

    // Momento para pedir as variáveis
    printf("Digite sua idade: ");
    scanf("%d", &idade);  // Leitura

    // Classifica a idade em Criança, Adolescente ou Adulto
    if (idade < 12) {
        printf("Voce e uma criança.\n");
    } else if (idade >= 12 && idade <= 18) {
        printf("Voce e um adolescente.\n");
    } else {
        printf("Voce e um adulto.\n");
    }

    return 0;  // FIM
}
