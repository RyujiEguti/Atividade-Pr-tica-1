/* Validador de Senha: Crie um programa que solicite ao usuário criar uma senha com valores inteiros.
O programa deve validar a senha e informar se ela é válida ou não. O usuário deve ter a opção de tentar criar uma 
nova senha até fornece uma senha valida.*/

#include <stdio.h>

int validarSenha(const char *senha) {
    
    for (int i = 0; senha[i] != '\0'; i++) {
        if (!isdigit(senha[i])) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char senha[100]; 
    int senhaValida = 0;

    printf("Crie uma senha com apenas valores inteiros.\n");

    do {
        printf("Digite sua senha: ");
        scanf("%s", senha); 

        if (validarSenha(senha)) {
            senhaValida = 1;
            printf("Senha válida! Acesso permitido.\n");
        } else {
            printf("Senha inválida! Acesso negado. Tente novamente.\n");
        }
    } while (!senhaValida); 

    return 0;
}