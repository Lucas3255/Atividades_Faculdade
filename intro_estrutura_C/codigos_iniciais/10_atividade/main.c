/*Esse programa em C verifica a idade do usuário e informa quantos anos faltam para 
atingir 18 anos, ou dá as boas-vindas caso já tenha 18 anos ou mais.*/

#include <stdio.h>

int main() {
    int idade;
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    
    if (idade <= 18) {
        int idadeCerta = 18 - idade;
        printf("Sistema indisponível, tente novamente em %d ano(s)", idadeCerta);
    } 
    else{
        printf("Bem-vindo à plataforma!");
    }
    
return 0;
}
