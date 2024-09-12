//EXERCÍCIO 9: 
#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    // Apresenta o menu de conversão
    printf("Escolha uma opcao de conversao de temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Digite a opcao (1, 2, 3 ou 4): ");
    scanf("%d", &opcao);

    // Verifica a opção escolhida e realiza a conversão correspondente
    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9/5) + 32;
            printf("A temperatura em Fahrenheit eh: %.2f°F\n", resultado);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = temperatura + 273.15;
            printf("A temperatura em Kelvin eh: %.2fK\n", resultado);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5/9;
            printf("A temperatura em Celsius eh: %.2f°C\n", resultado);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            resultado = temperatura - 273.15;
            printf("A temperatura em Celsius eh: %.2f°C\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
