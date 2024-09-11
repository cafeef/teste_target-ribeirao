/*
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/
#include <stdio.h>

int seq_fibonacci(int numero){
    int cont = 0, termo;
    int fibonacci[100] = {0, 1};
    while (cont < numero) {
        termo = fibonacci[cont] + fibonacci[cont + 1];
        fibonacci[cont + 2] = termo;
        if (numero == termo) {
            printf("%d faz parte do fibonacci", numero);
            break;
        }
        else if (numero < termo){
            printf("%d não faz parte do fibonacci", numero);
            break;
        }
        else {
            cont++;
        }
        }
        return numero;
    }

int main () {
    int n;
    puts("Digite um número:");
    scanf("%d", &n);
    seq_fibonacci(n);
}
