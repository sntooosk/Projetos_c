#include <stdio.h>   
#include <stdlib.h>  

/*
  Professor José de Assis - Aula 5: Uso de variáveis e estrutura condicional (if).
  Neste código, o objetivo é demonstrar como calcular a média de duas notas e tomar uma decisão 
  para verificar se o aluno foi aprovado ou reprovado com base na média.
*/

int main(int argc, char const *argv[])
{
    // Declaração das variáveis para armazenar as notas e a média
    float nota1, nota2, media;
    
    // Solicita ao usuário que digite a primeira nota
    printf("Digite a nota1: ");
    scanf("%f", &nota1);
    
    // Solicita ao usuário que digite a segunda nota
    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    // Calcula a média das duas notas
    media = (nota1 + nota2) / 2;
    
    // Exibe a média calculada
    printf("Media e: %.1f\n", media);

    // Verifica se o aluno foi aprovado ou reprovado com base na média
    if (media < 6)
    {
        printf("Aluno reprovado\n");
    }
    else
    {
        printf("Aluno aprovado\n");
    }

    return 0;
}
