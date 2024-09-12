//Exercício 5: Calcule a área
#include <stdio.h>
#define PI 3.14159  // Definindo o valor de PI

int main() {
    int opcao;
    float raio, base, altura, area;

    // Apresenta as opções ao usuário
    printf("Escolha uma opcao para calcular a area:\n");
    printf("1. Circulo\n");
    printf("2. Retangulo\n");
    printf("Digite a opcao (1 ou 2): ");
    scanf("%d", &opcao);

    // Verifica qual opção o usuário escolheu
    if (opcao == 1) {
        // Cálculo da área do círculo
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        area = PI * raio * raio;
        printf("A area do circulo é: %.2f\n", area);
    } else if (opcao == 2) {
        // Cálculo da área do retângulo
        printf("Digite a àrea da Base: ");
        scanf("%f", &base);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("A area  do retangulo eh: %.2f\n", area);
    } else {
        // Caso a opção seja inválida
        printf("Opcao invalida!\n");
    }

    return 0; // FIM
}
