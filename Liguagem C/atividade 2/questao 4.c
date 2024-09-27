//questao 4.cpp

#include <stdio.h>
#include <string.h>

int main() {
    const char *senhaCorreta = "senha123"; // Senha correta esoclhida por mim
    char senha[30]; // metodo complementar de limitacao

    // Loop para solicitar a senha ate que a correta seja digitada no caso " senha123 "
    while (1) {
        printf("Digite a senha: ");
        scanf("%s", senha); // Le 

        // Verifica 
        if (strcmp(senha, senhaCorreta) == 0) {
            printf("Senha correta! Acesso concedido.\n");
            break; // encerra
        } else {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }

    return 0;//fim
}

