// Verificar se um numero é positivo ou negativo.

#include <stdio.h>

int main()
{
    float numero;
    
    printf ("Digite um número: ");
    scanf ("%f", &numero);
    
    if (numero >= 0){
        printf ("O numero é positivo.\n");
    } else {
        printf ("O número é negativo.\n");
    }

    return 0;
}
