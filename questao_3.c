#include <stdio.h>

int main() {

    int idade = 20;

    // Ponteiro para inteiro
    int *ponteiro;

    // Armazena o endereço da variável idade
    ponteiro = &idade;

    // Exibe informações
    printf("Valor da variavel idade: %d\n", idade);

    // %p é usado para imprimir endereços
    printf("Endereco da variavel idade: %p\n", &idade);

    // O ponteiro guarda o endereço da variável
    printf("Valor armazenado no ponteiro: %p\n", ponteiro);

    // *ponteiro acessa o valor guardado naquele endereço
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
