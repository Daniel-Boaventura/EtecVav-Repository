//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Negativo por Zero


#include <stdio.h>

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] < 0)
            v[i] = 0;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
