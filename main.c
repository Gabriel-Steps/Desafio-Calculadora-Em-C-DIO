#include <stdio.h>
#include <stdbool.h>
#include "funcoes.h"

int main() {
    bool loop = true;
    int tipoCal = 0;

    while(loop) {
        float num1, num2;

        printf("\n------- Calculadora -------\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &tipoCal);

        if(tipoCal == 0) {
            printf("Encerrando a calculadora...\n");
            break;
        }

        printf("Digite o primeiro valor: ");
        scanf("%f", &num1);
        printf("Digite o segundo valor: ");
        scanf("%f", &num2);

        switch(tipoCal) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, soma(num1, num2));
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, subtracao(num1, num2));
                break;
            case 3:
                printf("Resultado: %.2f x %.2f = %.2f\n", num1, num2, multiplicacao(num1, num2));
                break;
            case 4:
                if(num2 != 0) {
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, divisao(num1, num2));
                } else {
                    printf("Erro: divisao por zero nao permitida!\n");
                }
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    return 0;
}
