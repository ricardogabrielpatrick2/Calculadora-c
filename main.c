#include <stdio.h>

int main() {
    float num1, num2;
    int opcao;

    printf("==========\n");
    printf(" CALCULADORA \n");
    printf("==========\n");

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0. Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

     if(opcao == 0){
        printf("Programa encerrado\n");
        return 0;
    }

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao) {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: divisao por zero!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}