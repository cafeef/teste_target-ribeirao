/*
Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?
*/
#include <stdio.h>
int main() {
    int indice = 12, soma = 0, k = 1;
    soma = (indice)*(indice + k) / 2;
    printf("O resultado da soma é: %d\n", soma);
}