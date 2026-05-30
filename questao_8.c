#include <stdio.h>

// Função que realiza operações matemáticas
void calcularOperacoes(float n1, float n2,
                       float *soma,
                       float *subtracao,
                       float *multiplicacao,
                       float *divisao) {

    // Calcula a soma
    *soma = n1 + n2;

    // Calcula a subtração
    *subtracao = n1 - n2;

    // Calcula a multiplicação
    *multiplicacao = n1 * n2;

    // Verifica se o divisor é diferente de zero
    if(n2 != 0) {
        *divisao = n1 / n2;
    }
    else {
        printf("Nao existe divisao por zero.\n");
        *divisao = 0;
    }
}

int main() {

    float valor1, valor2;

    float soma;
    float sub;
    float mult;
    float div;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &valor1, &valor2);

    // Chama a função enviando os endereços das variáveis
    calcularOperacoes(valor1, valor2,
                      &soma,
                      &sub,
                      &mult,
                      &div);

    // Mostra os resultados
    printf("\nSoma = %.2f\n", soma);
    printf("Subtracao = %.2f\n", sub);
    printf("Multiplicacao = %.2f\n", mult);
    printf("Divisao = %.2f\n", div);

    return 0;
}
