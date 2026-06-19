//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Ordem números


#include <stdio.h>

void verificarOrdem(int v[]) {
    int crescente = 1, decrescente = 1;

    for(int i = 0; i < 4; i++) {
        if(v[i] < v[i+1])
            decrescente = 0;

        if(v[i] > v[i+1])
            crescente = 0;
    }

    if(crescente)
        printf("Ordem crescente\n");
    else if(decrescente)
        printf("Ordem decrescente\n");
    else
        printf("Nao ordenado\n");
}

int main() {
    int v[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    verificarOrdem(v);

    return 0;
}
