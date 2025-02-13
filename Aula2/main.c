#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>  // Biblioteca para configuração de locale, como a linguagem do sistema

int main(int argc, char const *argv[])
{
    // Configura o idioma do sistema para português
    setlocale(LC_ALL, "Portuguese");

    // Imprime a mensagem "Olá Mundo"
    printf("Olá Mundo \n");

    // Altera a cor do texto para fundo azul e letras brancas
    system("color 1F");

    // Pausa a execução do programa e espera o usuário pressionar uma tecla
    system("pause");

    // Limpa a tela do terminal
    system("cls");

    // Altera a cor do texto para fundo branco e letras pretas
    system("color F0");

    // Imprime o nome "Juliano cassimiro dos santos"
    printf("Juliano cassimiro dos santos \n");

    // Pausa a execução do programa e espera o usuário pressionar uma tecla
    system("pause");

    return 0;
}
