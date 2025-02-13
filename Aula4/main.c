#include <stdio.h>   
#include <stdlib.h>  
#include <locale.h>  // Biblioteca para configurar o idioma do sistema (locale)

 /*
  Professor José de Assis - Aula 4: Exemplo de uso de variáveis e estrutura de decisão (condicional).
  Neste código, o objetivo é demonstrar o uso de uma variável inteira e a estrutura de decisão "if", 
  que é usada para tomar decisões baseadas em condições.
 */
int main(int argc, char const *argv[])
{
    // Configura o idioma para português (usando UTF-8 para lidar com acentuação)
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declaração da variável 'idade' do tipo inteiro
    int idade;
    
    // Solicita ao usuário que digite sua idade
    printf("Digite a sua idade: ");
    
    // Lê a idade do usuário e armazena na variável 'idade'
    scanf("%d", &idade);
    
    // Exibe a idade do usuário
    printf("Idade: %d\n", idade);
    
    // Estrutura de decisão para verificar a idade e determinar se o usuário é menor ou maior de idade
    if (idade < 18)
    {
        // Caso a idade seja menor que 18, imprime que o usuário é menor de idade
        printf("\nVocê é menor de idade.\n");
    }
    
    // A segunda estrutura de decisão verifica se a idade é 18 ou mais
    if (idade >= 18)
    {
        // Caso a idade seja 18 ou mais, imprime que o usuário é maior de idade
        printf("\nVocê é maior de idade.\n");
    }
    
    // Pausa a execução do programa até que o usuário pressione uma tecla
    system("pause");

    return 0;
}
