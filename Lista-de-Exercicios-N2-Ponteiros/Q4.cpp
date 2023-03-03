/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. 
Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores 
inteiros informados pelo usuário. Em seguida, crie um ponteiro que aponte para o primeiro 
elemento do vetor e percorra o vetor utilizando esse ponteiro, imprimindo na tela os valores 
dos elementos do vetor em ordem inversa. */

#include <stdio.h>

int main() {
    int n, i;
    int vetor[100];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    int *ponteiro = vetor + (n - 1);
    printf("Valores do vetor em ordem inversa:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d\n", *ponteiro);
        ponteiro--;
    }

    return 0;
}

