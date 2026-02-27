/*Esse programa solicita ao usuário que escolha uma opção (1 a 3) e, com base no número digitado, 
exibe uma mensagem correspondente. Se o número não for 1, 2 ou 3, ele imprime "Opção inválida".*/

#include <stdio.h>

int main()
{
    int opcao;
    
    printf("Escolha uma opção (1 a 3): ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
            printf("Você escolheu a opção 1.\n");
            break;

        case 2:
            printf("Você escolheu a opção 2.\n");
            break;

        case 3:
            printf("Você escolheu a opção 3.\n");
            break;

        default:
        printf("Opção inválida.\n");
    }
}
