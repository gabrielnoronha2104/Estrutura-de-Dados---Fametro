#include <stdio.h>
#include <string.h>

// Função que inverte a string
void inverterTexto(char *texto) {

    // Ponteiro para o início da string
    char *inicio = texto;

    // Ponteiro para o último caractere da string
    char *fim = texto + strlen(texto) - 1;

    // Troca os caracteres até os ponteiros se encontrarem
    while(inicio < fim) {

        char temp = *inicio;

        *inicio = *fim;
        *fim = temp;

        // Move os ponteiros
        inicio++;
        fim--;
    }
}

int main() {

    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Chama a função
    inverterTexto(palavra);

    // Exibe a palavra invertida
    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
