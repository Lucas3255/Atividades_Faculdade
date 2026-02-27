//Comparar se os números são iguais.

#include <stdio.h>

int main ()
{
    int num1, num2;
    
    printf ("Digite o primeiro número inteiro: ");
    scanf ("%d", &num1);
    
    printf ("Digite o primeiro segundo inteiro: ");
    scanf ("%d", &num2);
    
    if (num1 == num2) {
        printf ("Numeros iguais\n");
    } else {
        printf ("Números diferentes\n");
    }

    return 0;
}
