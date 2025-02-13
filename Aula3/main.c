#include <stdio.h>  
#include <stdlib.h>

 /*
  Professor José de Assis - Aula 3: Uso de variável do tipo char
  Neste código, o objetivo é demonstrar como manipular uma variável do tipo 'char' para armazenar strings (sequências de caracteres).
 */
int main(int argc, char const *argv[])
{
    // Declaração de uma variável 'nome' do tipo char, que pode armazenar até 50 caracteres
    char nome[50];
    
    // Solicita ao usuário que digite seu nome
    printf("Digite o seu nome:");

    // Lê a entrada do usuário e armazena na variável 'nome'. (A função gets é insegura e pode causar problemas de segurança, sendo recomendada a substituição por fgets em casos reais)
    gets(nome);

    // Limpa a tela do terminal
    system("cls");

    // Imprime uma mensagem de boas-vindas usando a variável 'nome'. %s é um marcador de formato que indica que será passado um string (a variável nome)
    printf("Bem-vindo %s\n", nome);

    // Pausa a execução do programa até que o usuário pressione uma tecla
    system("pause");

    return 0;
}
