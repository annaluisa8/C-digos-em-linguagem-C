#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int vetor[10], i, cubo[10], quadrado[10];
    
    setlocale(LC_ALL, "portuguese");
    printf("Digite uma valor para o vetor:\n");
    for (i = 0; i < 10; i++){
        printf("Vetor [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++){
        quadrado[i] = vetor[i]*vetor[i];
        cubo[i] = vetor[i]*vetor[i]*vetor[i];
    }
    printf ("\nVetor elevado ao quadrado:");
    for (i = 0; i < 10; i++){
        printf ("\nVetor [%d]: %d", i+1, quadrado[i]);
    }
    printf ("\n\nVetor elevado ao cubo:");
    for (i = 0; i < 10; i++){
        printf ("\nVetor [%d]: %d", i+1, cubo[i]);
    }
}