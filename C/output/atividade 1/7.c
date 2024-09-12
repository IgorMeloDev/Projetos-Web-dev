//Exercício 7: Cálculo das operações básicas
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Solicita a operação desejada
    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);  // O espaço antes de %c é para ignorar caracteres extras

    // Realiza a operação de acordo com a escolha do usuário
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao permitida!\n");
            }
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}
