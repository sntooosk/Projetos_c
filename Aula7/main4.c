#include <stdio.h>

/* Declaração de funções */
float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);
float porcentagem(float valor, float percent);

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Porcentagem\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando calculadora...\n");
            break;
        }

        if (opcao == 5) { // Porcentagem precisa de um número e uma porcentagem
            printf("Digite o valor: ");
            scanf("%f", &num1);
            printf("Digite a porcentagem: ");
            scanf("%f", &num2);
            resultado = porcentagem(num1, num2);
        } else {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            switch (opcao) {
                case 1:
                    resultado = soma(num1, num2);
                    break;
                case 2:
                    resultado = subtracao(num1, num2);
                    break;
                case 3:
                    resultado = multiplicacao(num1, num2);
                    break;
                case 4:
                    resultado = divisao(num1, num2);
                    break;
                default:
                    printf("Opcao invalida!\n");
                    continue; // Volta para o início do loop
            }
        }

        printf("Resultado: %.2f\n", resultado);

    } while (1);

    return 0;
}

/* Funções das operações matemáticas */
float soma(float n1, float n2) {
    return n1 + n2;
}

float subtracao(float n1, float n2) {
    return n1 - n2;
}

float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    if (n2 == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return n1 / n2;
}

float porcentagem(float valor, float percent) {
    return (valor * percent) / 100;
}
