//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//palíndromo


#include <stdio.h>
#include <string.h>

int palindromo(char palavra[]) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while(inicio < fim) {
        if(palavra[inicio] != palavra[fim]) {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if(palindromo(palavra))
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");

    return 0;
}
