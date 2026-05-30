#include <stdio.h>

// Função que dobra o valor da variável original
void dobrarValor(int *numero) {

    // Multiplica o valor apontado por 2
    *numero = *numero * 2;
}

int main() {

    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("Valor antes: %d\n", valor);

    // Envia o endereço da variável
    dobrarValor(&valor);

    printf("Valor depois do dobro: %d\n", valor);

    return 0;
}
