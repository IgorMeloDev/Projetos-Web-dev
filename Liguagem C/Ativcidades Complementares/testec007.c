/*
    Exercicio 007
    Calcular o volume de um cilindro - azeite
*/

#include <stdio.h>

#define PI 3.14159 // Definindo uma constante para PI

int main(void) {
    float volume, raio, altura; // Declaração das variáveis

    // Solicitar ao usuário o raio e a altura
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    // Cálculo do volume do cilindro
    volume = PI * (raio * raio) * altura;

    // Apresentando o resultado
    printf("O volume do cilindro de azeite e: %.2f\n", volume);

    return 0;
}
