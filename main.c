#include <stdio.h>
#define TAMANHO 5 

int main() {
    int vetor[TAMANHO];
    int i, j, temp; 

    printf("\nDigite %d números inteiros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            if (vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    printf("\n números em ordem crescente: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d", vetor[i]);
        if (i < TAMANHO - 1) {
            printf(" ");
        }
    }
    printf("\n"); 
    return 0;
}
