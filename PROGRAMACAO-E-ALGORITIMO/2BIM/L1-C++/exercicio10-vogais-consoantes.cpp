//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Contar vogais e consoantes


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contarVogais(char nome[]) {
    int cont = 0;

    for(int i = 0; i < strlen(nome); i++) {
        char c = tolower(nome[i]);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cont++;
    }

    return cont;
}

int contarConsoantes(char nome[]) {
    int cont = 0;

    for(int i = 0; i < strlen(nome); i++) {
        char c = tolower(nome[i]);

        if(isalpha(c) &&
           !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) {

            cont++;
        }
    }

    return cont;
}

int main() {
    char nome[100];

    printf("Digite o nome completo: ");
    fgets(nome, 100, stdin);

    printf("Vogais: %d\n", contarVogais(nome));
    printf("Consoantes: %d\n", contarConsoantes(nome));

    return 0;
}
