#include <stdio.h>
#include <math.h>  // Biblioteca matematica.

float adicao(float a, float b){
return a + b;
}
float subtracao(float a, float b){
return a - b;
}
float multiplicacao(float a, float b){
    return a * b;                                 // Quando declarado antes do main, o compilador ja a conhece.
}
float divisao(float a, float b){
    return a / b;
}
float porcentagem(float percentual, float valor){
    return (percentual * valor) / 100;
}
float media(float a, float b){
    return (a + b) /2;
}

int main() {
    float a, b;
    int opcao;

do{         // Estrutura de repetição, repete tudo ate o usuario digitar 0.

        printf("=============\n");
         printf(" CALCULADORA \n");
        printf("=============\n");
    
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - potegcc main.cncia\n");
        printf("6 - Raiz quadrada\n");
        printf("7 - Porcentagem\n");
        printf("8 - Media\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


     if(opcao == 0){
        printf("Programa encerrado\n\n");
        break;
    }

     if(opcao == 6){
        printf("Digite o numero: ");
        scanf("%f", &a);
        
    }else{

        printf("Digite o primeiro numero: ");
        scanf("%f", &a);

        printf("Digite o segundo numero: ");
        scanf("%f", &b);
}


    switch(opcao) {
        case 1:
             printf("Resultado: %.2f\n\n", adicao (a, b));
             break;

        case 2:
             printf("Resultado: %.2f\n\n", subtracao(a, b));
             break;

        case 3:
            printf("Resultado: %.2f\n\n", multiplicacao(a, b));
            break;

        case 4:
            if(b != 0)
                printf("Resultado: %.2f\n\n", divisao(a, b));
            else
                printf("Erro: divisao por zero!\n\n");
            break;

        case 5:
                printf("resultado: %.2f\n\n", pow(a,b));
            break;
            
        case 6:
            if(a >= 0)
                printf("Resultado: %.2f\n\n", sqrt(a));
            else
                printf("Erro: Numero negativo!\n\n");
            break;

        case 7:
                printf("Resultado: %.2f\n\n", porcentagem(a, b));
            break;

            case 8: 
                printf("Resultado: %.2f\n\n", media(a, b));
            break;

        default:
            printf("Opcao invalida!\n\n");
    }
}while(opcao != 0);

    return 0;
}