/* Esse programa em C solicita ao usuário a idade, altura e peso, 
e depois exibe essas informações formatadas na tela.*/

#include <stdio.h>

int main()
{
    int idade;
    float altura, peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("\nA idade eh: %d anos\n", idade); 
    printf("A altura eh: %.2f metros\n", altura); 
    printf("O peso eh: %f kg\n", peso); 

    return 0;
}