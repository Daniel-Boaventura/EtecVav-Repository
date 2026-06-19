//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Soma  números ímpares até um número

#include <stdio.h>

int impar(int n) {
    return n % 2 != 0;
}

int main() {
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        if(impar(i)) {
            soma += i;
        }
    }

    printf("Soma dos impares: %d\n", soma);

    return 0;
}
