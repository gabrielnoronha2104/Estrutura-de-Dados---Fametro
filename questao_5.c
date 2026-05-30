#include <stdio.h>

// Função que copia uma string para outra usando ponteiros
void copiarString(char *origem, char *destino) {

    // Continua copiando até encontrar o final da string
    while(*origem != '\0') {

        // Copia caractere por caractere
        *destino = *origem;

        // Avança para o próximo caractere
        origem++;
        destino++;
    }

    // Adiciona o caractere final da string
    *destino = '\0';
}

int main() {

    char textoOriginal[50] = "Estrutura de Dados";
    char textoCopia[50];

    // Chama a função
    copiarString(textoOriginal, textoCopia);

    // Exibe a string copiada
    printf("Texto original: %s\n", textoOriginal);
    printf("Texto copiado: %s\n", textoCopia);

    return 0;
}
