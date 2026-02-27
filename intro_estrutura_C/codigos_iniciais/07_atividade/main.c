/*Esse programa em C recebe três letras do usuário e as exibe na ordem inversa.*/

#include <stdio.h>

int main() {
    char a, b, c;
    
    printf("Insira 3 Letras: ");
    scanf(" %c %c %c", &a, &b, &c);
    
    printf("%c %c %c\n", c, b, a);
    
    return 0;
}
