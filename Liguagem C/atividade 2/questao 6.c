//questão_6.cpp
// essa sequencia é bem conhecida chamada sequência de Fibonacci , que sempre soma o resultado com o resultado anterior progredindo a sequencia....
#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Amostra gratis: Os primeiros %d termos da sequencia :\n", n);

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%d, ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        printf("%d, ", nextTerm);
    }
    printf("\n");
}

int main() {
    int n = 10; // Mostra sempre os 10 primeiros termos como amostra grátis

    // Exibe os 10 primeiros termos
    fibonacci(n);

    // Pergunta ao usuário quantos termos ele deseja
    int totalTermos;
    printf("Quantos termos voce deseja ver? ");
    scanf("%d", &totalTermos);

    // Calcula e exibe os termos até o número solicitado
    int t1 = 0, t2 = 1, nextTerm;

    if (totalTermos <= 0) {
        printf("Por favor, digite um número maior que 0.\n");
        return 1;
    }

    printf("Os primeiros %d termos da sequencia de Fibonacci são:\n", totalTermos);
    for (int i = 1; i <= totalTermos; ++i) {
        if (i == 1) {
            printf("%d, ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        printf("%d, ", nextTerm);
    }
    printf("\n");

    // Pergunta qual termo o usuário deseja ver
    int termo;
    printf("Qual termo voce deseja ver? (1 a %d): ", totalTermos);
    scanf("%d", &termo);

    // Verifica se o termo solicitado é válido
    if (termo >= 1 && termo <= totalTermos) {
        // Recalcula para encontrar o termo específico
        t1 = 0;
        t2 = 1;
        int valorTermo = t1; // Inicializa com o primeiro termo
        for (int i = 1; i < termo; ++i) {
            valorTermo = t1 + t2;
            t1 = t2;
            t2 = valorTermo;
        }
        printf("O %d termo da sequência de Fibonacci é: %d\n", termo, valorTermo);
    } else {
        printf("Por favor, digite um numero entre 1 e %d.\n", totalTermos);
    }

    return 0;
}
