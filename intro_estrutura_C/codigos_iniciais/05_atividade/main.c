/*Esse programa em C demonstra como formatar a impressão de um 
número de ponto flutuante, controlando a quantidade de casas 
decimais, o preenchimento com zeros à esquerda e o sinal do 
número. Ele usa diferentes especificadores de formato como 
%f, %6.2f e %+06.2f.*/

#include <stdio.h>

float valor = 1.230;

int main() {
    
    printf("%f\n", valor); //imprime 1.23000
    printf("%3f\n", valor); //imprime 1.230
    printf("%2f\n", valor); //imprime 1.23
    printf("%1f\n", valor); //imprime 1.2
    printf("%6.2f\n", valor); /*imprime 1.23 colocando espaços à esquerda para que no total, o número 
                                tenha 6 caracters, contando o ponto decimal como um desses caracters. */
    
    printf("%06.2f\n", valor); /* imprime 001.23 colocando espaços à esquerda para que no total, o número 
                                tenha 6 caracters, contando o ponto decimal como um desses caraters. */
    
    printf ("%+06.2f\n", valor); /* imprime +01.23 colocando sinais positivos quando o número é positivo. 
                                    Isso não interfere em nada quando o número é negativo, pois neste caso 
                                    sempre aparece o sinal - antes do número, conforme seria esperado. */
    
    printf("%+08.2f\n", valor); //imprime: +0001.23
    
    return 0;
}
