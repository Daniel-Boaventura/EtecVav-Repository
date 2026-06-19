//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Potência repetição

#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;

    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("Base: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %d\n", potencia(base, expoente));

    return 0;
}
