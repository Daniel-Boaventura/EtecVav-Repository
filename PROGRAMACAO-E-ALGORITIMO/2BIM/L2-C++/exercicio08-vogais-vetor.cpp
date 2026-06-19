//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//contar vogais no vetor


#include <stdio.h>

int main() {
    char letras[20];
    int vogais[5] = {0};

    for(int i = 0; i < 20; i++) {
        scanf(" %c", &letras[i]);

        switch(letras[i]) {
            case 'a': vogais[0]++; break;
            case 'e': vogais[1]++; break;
            case 'i': vogais[2]++; break;
            case 'o': vogais[3]++; break;
            case 'u': vogais[4]++; break;
        }
    }

    printf("a: %d\n", vogais[0]);
    printf("e: %d\n", vogais[1]);
    printf("i: %d\n", vogais[2]);
    printf("o: %d\n", vogais[3]);
    printf("u: %d\n", vogais[4]);

    return 0;
}
