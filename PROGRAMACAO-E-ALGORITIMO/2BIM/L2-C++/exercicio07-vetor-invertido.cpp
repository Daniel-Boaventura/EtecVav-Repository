//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Vetor invertido e soma dos positivos


#include <stdio.h>

int main() {
    int v1[10], v2[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);

        v2[i] = -v1[i];
    }

    for(int i = 0; i < 10; i++) {

        if(v1[i] > 0)
            soma += v1[i];

        if(v2[i] > 0)
            soma += v2[i];
    }

    printf("Soma positivos: %d\n", soma);

    return 0;
}
