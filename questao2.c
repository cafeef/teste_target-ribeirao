/*
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
*/
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string do usuário
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') { // Verifica 'a' ou 'A'
            count++;
        }
    }
    printf("Número de 'a': %d\n", count);
}
