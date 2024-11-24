/* Cálculo de Média e Status do Aluno: Crie um programa que leia as notas de um aluno e calcule a média. 0 programa deve
informar se o aluno foi aprovado (média >= 7), reprovado (média < 4) ou está em recuperação (média entre 4 e 7). 
O programa deve permitir que o usuário insira novas notas e calcule a média até que deseje encerrar. */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    char opcao;

    printf("Bem-vindo ao sistema de cálculo de médias!\n");

    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("Média do aluno: %.2f\n", media);
        if (media >= 7) {
            printf("Situação: Aprovado!\n");
        } else if (media < 4) {
            printf("Situação: Reprovado.\n");
        } else {
            printf("Situação: Recuperação.\n");
        }

        printf("Deseja calcular a média de outro aluno? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    printf("Encerrando o programa. Obrigado por usar o sistema de cálculo de médias!\n");
    return 0;
}