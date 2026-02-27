//Utilizando While.

#include <stdio.h>

int main(void) {
    int contador = 1; // Inicializando a variável de controle
    
    while (contador <= 10) { // Testando a condição
        printf("%d\n", contador); // Executando um comando dentro do laço
        contador++; // Atualizando a variável de controle
    }

    return 0;
}

