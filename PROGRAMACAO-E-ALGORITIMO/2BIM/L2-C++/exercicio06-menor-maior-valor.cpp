//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Índice menor, maior valor


nclude <stdio.h>

int main() {
    int v[15];
    int menor, maior;
    int indMenor = 0, indMaior = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);
    }

    menor = maior = v[0];

    for(int i = 1; i < 15; i++) {

        if(v[i] < menor) {
            menor = v[i];
            indMenor = i;
        }

        if(v[i] > maior) {
            maior = v[i];
            indMaior = i;
        }
    }

    printf("Indice menor: %d\n", indMenor);
    printf("Indice maior: %d\n", indMaior);

    return 0;
}
