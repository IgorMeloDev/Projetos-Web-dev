//EXERCÍCIO 10:Verificação de Palíndromo
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100], invertida[100];
    int tamanho, i, j;

    // Solicita ao usuário para digitar uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Remove diferenças entre letras maiúsculas e minúsculas
    for (i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    // Calcula o tamanho da palavra
    tamanho = strlen(palavra);

    // Inverte a palavra
    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        invertida[j] = palavra[i];
    }
    invertida[j] = '\0'; // Adiciona o caractere nulo no final da string invertida

    // Verifica se a palavra original é igual à invertida
    if (strcmp(palavra, invertida) == 0) {
        printf("A palavra %s eh um palindromo.\n", palavra);
    } else {
        printf("A palavra %s nao eh um palindromo.\n", palavra);
    }

    return 0;
}

