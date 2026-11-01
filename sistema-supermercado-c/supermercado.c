#include <stdio.h>

int main() {
    float precos[10] = {5.99, 12.50, 3.75, 8.90, 15.40, 2.99, 25.00, 7.30, 18.75, 10.20};
    float temp;
    int i, j;

    /* Exibição do vetor original */
    printf("=== PRECOS ORIGINAIS DOS PRODUTOS ===\n");
    for(i = 0; i < 10; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    /* Ordenação crescente */
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(precos[j] > precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    printf("\n=== PRECOS EM ORDEM CRESCENTE ===\n");
    for(i = 0; i < 10; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    /* Ordenação decrescente */
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(precos[j] < precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    printf("\n=== PRECOS EM ORDEM DECRESCENTE ===\n");
    for(i = 0; i < 10; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    return 0;
}