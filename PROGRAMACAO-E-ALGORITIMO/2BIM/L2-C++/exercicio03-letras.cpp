//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//contar letras


#include <stdio.h>

int main() {
    char letras[20];
    char busca;
    int cont = 0;

    for(int i = 0; i < 20; i++) {
        scanf(" %c", &letras[i]);
    }

    printf("Digite a letra para buscar: ");
    scanf(" %c", &busca);

    for(int i = 0; i < 20; i++) {
        if(letras[i] == busca)
            cont++;
    }

    printf("Quantidade: %d\n", cont);

    return 0;
}
