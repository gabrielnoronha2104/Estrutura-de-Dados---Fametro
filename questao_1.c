#include <stdio.h>

// Função responsável por trocar os valores
// de duas variáveis inteiras usando ponteiros
void trocarValores(int *num1, int *num2) {

    // Variável auxiliar para armazenar temporariamente um valor
    int auxiliar;
    auxiliar = *num1;
    *num1 = *num2;
    *num2 = auxiliar;
}

int main() {

    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    // Mostra os valores antes da troca
    printf("\nAntes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    trocarValores(&a, &b);
    printf("\nDepois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
