/* Classificador de Idade: Crie um programa que leia a idade de uma pessoa e classifique-a em diferentes categorias:
"Criança" (0-12 anos), "Adolescente" (13-17 anos), "Adulto" (18-64 anos) e "Idoso" (65 anos ou mais). O programa deve
continuar pedindo idades e classificações até que o usuário insira um valor negativo para encerrar. */

#include <stdio.h>

int main() {
    int idade;

    printf("Bem-vindo ao classificador de idades!\n");
    printf("Digite uma idade para classificá-la. Insira um valor negativo para encerrar.\n");

    while (1) { 
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Encerrando o programa. Obrigado por usar o classificador de idades!\n");
            break; 
        }

        if (idade >= 0 && idade <= 12) {
            printf("Categoria: Criança\n");
        } else if (idade >= 13 && idade <= 17) {
            printf("Categoria: Adolescente\n");
        } else if (idade >= 18 && idade <= 64) {
            printf("Categoria: Adulto\n");
        } else if (idade >= 65) {
            printf("Categoria: Idoso\n");
        } else {
            printf("Idade inválida. Tente novamente.\n");
        }
    }

    return 0;
}
