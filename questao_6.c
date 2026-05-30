#include <stdio.h>
#include <ctype.h>

// Função que conta vogais e consoantes
void contarLetras(char *frase, int *vogais, int *consoantes) {

    // Inicializa os contadores
    *vogais = 0;
    *consoantes = 0;

    // Percorre toda a string
    while(*frase != '\0') {

        // Converte para minúsculo
        char letra = tolower(*frase);

        // Verifica se é letra
        if(letra >= 'a' && letra <= 'z') {

            // Verifica se é vogal
            if(letra == 'a' || letra == 'e' ||
               letra == 'i' || letra == 'o' ||
               letra == 'u') {

                (*vogais)++;
            }
            else {
                (*consoantes)++;
            }
        }

        // Avança para o próximo caractere
        frase++;
    }
}

int main() {

    char texto[100];

    int qtdVogais, qtdConsoantes;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);

    // Chama a função
    contarLetras(texto, &qtdVogais, &qtdConsoantes);

    // Mostra os resultados
    printf("Quantidade de vogais: %d\n", qtdVogais);
    printf("Quantidade de consoantes: %d\n", qtdConsoantes);

    return 0;
}
