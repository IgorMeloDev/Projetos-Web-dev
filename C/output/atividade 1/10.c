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
