//Exercício 4: Maior entre os Três Números 
#include <stdio.h> //biblioteca 

int main() {
    int num1, num2, num3, maior;

    // Pede ao usuário para inserir três números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    // Inicialmente assume que o primeiro número é o maior
    maior = num1;

    // Compara o maior atual com o segundo número
    if (num2 > maior) {
        maior = num2;
    }

    // Compara o maior atual com o terceiro número
    if (num3 > maior) {
        maior = num3;
    }

    // Exibe o maior número
    printf("O maior numero entre os tres eh: %d\n", maior);

    return 0; //FIM
}
