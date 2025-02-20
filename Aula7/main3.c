#include <stdio.h>

/* Declaração de funções */
void soma(float n1, float n2);
void subtracao(float n1, float n2);
void multiplicacao(float n1, float n2);
void divisao(float n1, float n2);
void porcentagem(float valor, float percent);

int main() {
    printf("-------------------\n");
    printf("Soma dos numeros\n");

    soma(2, 4.5);
    soma(3, 5);
    soma(3, 6);

    printf("\n-------------------\n");
    printf("Subtracao dos numeros\n");

    subtracao(10, 4);
    subtracao(8.5, 2.3);
    subtracao(7, 1);

    printf("\n-------------------\n");
    printf("Multiplicacao dos numeros\n");

    multiplicacao(2, 4.5);
    multiplicacao(3, 5);
    multiplicacao(3, 6);

    printf("\n-------------------\n");
    printf("Divisao dos numeros\n");

    divisao(10, 2);
    divisao(9, 3);
    divisao(7, 2);

    printf("\n-------------------\n");
    printf("Porcentagem dos valores\n");

    porcentagem(200, 15);  // 15% de 200
    porcentagem(50, 30);   // 30% de 50
    porcentagem(100, 20);  // 20% de 100

    return 0;
}

/* Implementação das funções */
void soma(float n1, float n2) {
    printf("Soma: %.1f\n", n1 + n2);
}

void subtracao(float n1, float n2) {
    printf("Subtração: %.1f\n", n1 - n2);
}

void multiplicacao(float n1, float n2) {
    printf("Multiplicação: %.1f\n", n1 * n2);
}

void divisao(float n1, float n2) {
    if (n2 != 0) {
        printf("Divisão: %.2f\n", n1 / n2);
    } else {
        printf("Erro: Divisão por zero!\n");
    }
}

void porcentagem(float valor, float percent) {
    float resultado = (valor * percent) / 100;
    printf("Porcentagem: %.1f%% de %.1f é %.1f\n", percent, valor, resultado);
}
