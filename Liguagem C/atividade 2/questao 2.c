//Quest�o_2.cpp
#include <stdio.h>

int main() {
    float valorc,valorf;
    int codigoc;

    // Entrada de dados
    printf("Digite o valor total da compra: ");
    scanf("%f", &valorc);
    
    printf("Digite o codigo do cliente (1 - Comum, 2 - Funcionario, 3 - VIP): ");
    scanf("%d", &codigoc);

    // usa switch para poder esoclher os casos distintos 
    switch (codigoc){
        case 1: // Cliente comum
            valorf = valorc; // Sem desconto
            break;
        case 2: // Funcion�rio
            valorf = valorc * 0.90; // 10% de desconto
            break;
        case 3: // Cliente VIP
            valorf = valorc * 0.95; // 5% de desconto
            break;
        default:
            printf("Codigo de cliente invalido.\n");
            return 1; // Opçao invalida caso o usario erre ou queira simplesmente sair sem fazer nada
    }

    
    printf("O valor total a ser pago eh: R$ %.2f\n", valorf);
    
    return 0;
}

