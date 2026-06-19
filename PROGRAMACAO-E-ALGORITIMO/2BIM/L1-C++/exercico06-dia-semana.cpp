//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Dia semana


#include <stdio.h>

void diaSemana(int n) {
    switch(n) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda\n"); break;
        case 3: printf("Terca\n"); break;
        case 4: printf("Quarta\n"); break;
        case 5: printf("Quinta\n"); break;
        case 6: printf("Sexta\n"); break;
        case 7: printf("Sabado\n"); break;
        default: printf("Numero invalido\n");
    }
}

int main() {
    int num;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &num);

    diaSemana(num);

    return 0;
}

