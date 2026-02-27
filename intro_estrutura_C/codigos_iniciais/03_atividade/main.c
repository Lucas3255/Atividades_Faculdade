/*Esse programa em C realiza as operações de soma, 
subtração, multiplicação e divisão com os números 7 
e 4, e exibe os resultados de cada uma dessas operações.*/

#include <stdio.h>

int main()
{
    int a = 7, b = 4;
    int soma, subtração, multiplicação, divisão;

    soma = a + b;
    subtração = a - b;
    multiplicação = a * b;
    divisão = a / b;  

    printf("A soma é: %i\n", soma);
    printf("A subtração é: %i\n", subtração);
    printf("A multiplicação é: %i\n", multiplicação);
    printf("A divisão é: %i\n", divisão);

    return 0;
}
