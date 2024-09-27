//Quest 1.cpp
#include <stdio.h>



int main() {
    
    float temperatura, resultado;

  
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9/5) + 32;
            printf("A temperatura em Fahrenheit eh: %.2fF\n", resultado);
   

    return 0;
}
