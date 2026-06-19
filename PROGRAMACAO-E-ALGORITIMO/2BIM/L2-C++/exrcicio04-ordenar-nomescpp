//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Ordenar nomes


#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][50];
    char temp[50];

    for(int i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {

            if(strcmp(nomes[i], nomes[j]) > 0) {

                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("Ordem crescente:\n");

    for(int i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
