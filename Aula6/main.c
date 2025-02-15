#include <stdio.h>
#include <stdlib.h>

/*
Estrutura Switch case
*/
int main()
{
    int numero;

    printf("Sistemas\n\n");
    printf("1- Windows\n");
    printf("2 - Linux\n");
    printf("\nEscolha uma Opcao Desejada: \n");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        system("cls");
        printf("Iniciando Windows: \n");
        break;

    case 2:
        system("cls");
        printf("Iniciando Linux: \n");
        break;

    default:
        system("cls");
        printf("Opcao Invalida \n");
    }

    system("pause");
    return 0;
}
