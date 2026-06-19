//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Operações matemáticas


#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}

int main() {
    float n1, n2;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("Soma: %.2f\n", soma(n1, n2));
    printf("Subtracao: %.2f\n", subtracao(n1, n2));
    printf("Multiplicacao: %.2f\n", multiplicacao(n1, n2));

    if(n2 != 0)
        printf("Divisao: %.2f\n", divisao(n1, n2));
    else
        printf("Divisao impossivel.\n");

    return 0;
}
