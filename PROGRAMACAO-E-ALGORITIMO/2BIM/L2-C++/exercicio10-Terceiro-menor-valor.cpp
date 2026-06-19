//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Terceiro menor valor

#include <stdio.h>

int main() {
    int v[10], temp;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {

            if(v[i] > v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    printf("Terceiro menor: %d\n", v[2]);

    return 0;
}
