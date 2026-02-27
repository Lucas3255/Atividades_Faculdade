/*Esse programa em C verifica o número digitado pelo usuário e exibe uma mensagem 
com base em condições pré-definidas (zero, menor que 8, maior ou igual a 20, ou 
fora dessas condições).*/

#include <stdio.h>

int main (void) {

    int num;

    printf ("Digite um número: ");
    scanf ("%d", &num);

    if (num == 0) {
        printf ("O número é zero\n");
    } else if (num < 8) {
        printf ("O número é menor que 8\n");
    } else if (num >= 20) {
        printf ("O número é maior ou igual a 20\n");
    } else {
        printf ("O número está fora das condições criadas\n");
    }
}
