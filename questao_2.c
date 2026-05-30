#include <stdio.h>

// Função que encontra o maior e o menor valor do vetor
void encontrarMaiorMenor(int *vetor, int tamanho, int *maior, int *menor) {

    // Inicializa maior e menor com o primeiro elemento
    *maior = vetor[0];
    *menor = vetor[0];

    // Percorre o vetor a partir da segunda posição
    for(int i = 1; i < tamanho; i++) {

        // Verifica se encontrou um valor maior
        if(vetor[i] > *maior) {
            *maior = vetor[i];
        }

        // Verifica se encontrou um valor menor
        if(vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {

    int numeros[6] = {45, 12, 98, 23, 7, 61};

    int maiorValor, menorValor;

    encontrarMaiorMenor(numeros, 6, &maiorValor, &menorValor);

    printf("Maior valor: %d\n", maiorValor);
    printf("Menor valor: %d\n", menorValor);

    return 0;
}
