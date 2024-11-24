/* Maior de três Números: Faça um programa que leia três números inteiros e imprima o maior deles. 
(Suponha que não tenha números iguais). */

#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}