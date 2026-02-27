/*Esse programa em C calcula e exibe o perímetro e a área de um retângulo, a 
partir da altura e largura fornecidas pelo usuário.*/

#include <stdio.h>

int main() {
    float altura, largura, perimetro, area;

    // Solicitar os valores de altura e largura
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    // Calcular o perímetro
    perimetro = 2 * (altura + largura);

    // Calcular a área
    area = altura * largura;

    // Exibir os resultados
    printf("O perímetro do retângulo é: %.0f\n", perimetro);
    printf("A área do retângulo é: %.0f\n", area);

    return 0;
}
