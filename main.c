#include <stdio.h>

float adicao(float a, float b){
return a + b;
}
float subtracao(float a, float b){
return a - b;
}
float multiplicacao(float a, float b){
    return a * b;
}
float divisao(float a, float b){
    return a / b;
}

int main() {
    float a, b;
    int opcao;
do{
        printf("=============\n");
         printf(" CALCULADORA \n");
        printf("=============\n");
    
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0. Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


     if(opcao == 0){
        printf("Programa encerrado\n\n");
        break;
    }

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch(opcao) {
        case 1:
             printf("Resultado: %.2f\n\n", adicao (a, b));
             break;

        case 2:
             printf("Resultado: %.2f\n\n", a - b);
             break;

        case 3:
            printf("Resultado: %.2f\n\n", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Resultado: %.2f\n\n", a / b);
            else
                printf("Erro: divisao por zero!\n\n");
            break;

        default:
            printf("Opcao invalida!\n\n");
    }
}while(opcao != 0);

    return 0;
}