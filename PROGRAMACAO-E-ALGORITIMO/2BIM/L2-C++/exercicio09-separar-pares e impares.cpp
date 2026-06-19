//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Separar pares e impares

#include <stdio.h>

int main() {
    int v[10], pares[10], impares[10], soma[10];
    int p = 0, im = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0)
            pares[p++] = v[i];
        else
            impares[im++] = v[i];
    }

    for(int i = 0; i < p; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n");

    for(int i = 0; i < im; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
