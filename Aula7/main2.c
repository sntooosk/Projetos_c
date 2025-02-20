#include <stdio.h>
#include <stdlib.h>

/* Estrutura de funcoes */

void testeChamado(char *nome);

int main(int argc, char const *argv[])
{
    testeChamado("Juliano");
    testeChamado("Amanda");
    testeChamado("Vinicius");

    return 0;
}

void testeChamado(char *nome)
{
    printf("Ola, meu nome e %s.\n", nome);
}
