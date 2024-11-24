/* Jogo de Adivinhação de Número: Crie um programa que gere um número aleatório entre 1 e 50 e peça ao usuário para
adivinhar o número. O programa deve informar se o palpite do usuário e muito alto, muito baixo ou correto. O usuário
deve ter até 5 tentativas para adivinhar o número corretamente. */

#include <stdio.h>

int main() {
    
    int numeroAleatorio, palpite, tentativas = 5;

    srand(time(NULL)); 
    numeroAleatorio = rand() % 50 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 50. Você tem %d tentativas.\n", tentativas);

    for (int i = 1; i <= tentativas; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &palpite);

        if (palpite == numeroAleatorio) {
            printf("Parabéns! Você adivinhou o número corretamente em %d tentativa(s)!\n", i);
            return 0; 
        } else if (palpite < numeroAleatorio) {
            printf("Muito baixo! Tente novamente.\n");
        } else {
            printf("Muito alto! Tente novamente.\n");
        }
    }
    
    printf("Que pena! Você não conseguiu adivinhar o número. O número correto era %d.\n", numeroAleatorio);

    return 0;
}