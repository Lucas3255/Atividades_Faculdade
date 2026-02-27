/*Esse programa em C pede para o usuário digitar seu nome e 
exibe uma saudação com o nome fornecido.*/

#include <stdio.h>

int main() {
    char nome[100];
    
    printf("Digite seu nome: "); 
    fgets (nome, 100, stdin); 
    
    printf("Olá, %s", nome); 
    
    return 0;
}
