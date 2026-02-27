/*Esse programa em C verifica se a idade digitada pelo usuário é maior ou 
igual a 18 e exibe se a pessoa é maior ou menor de idade.*/

#include <stdio.h>

int main()
{
    int idade;
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    
    if (idade >= 18) {
        printf("Já é maior de idade!");
    } 
    else
    if (idade < 18) {
        printf ("É menor de idade!");
    }

    return 0;
}
