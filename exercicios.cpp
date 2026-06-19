1) Soma  números ímpares até um número
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
 
2) Potência repetição
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
 
3) Peso 
#include <stdio.h>

float pesoMasculino(float altura) {
    return (72.7 * altura) - 58;
}

float pesoFeminino(float altura) {
    return (62.1 * altura) - 44.7;
}

int main() {
    char sexo;
    float altura;

    printf("Sexo (M/F): ");
    scanf("%c", &sexo);

    printf("Altura: ");
    scanf("%f", &altura);

    if(sexo == 'M' || sexo == 'm') {
        printf("Peso ideal: %.2f\n", pesoMasculino(altura));
    } else {
        printf("Peso ideal: %.2f\n", pesoFeminino(altura));
    }

    return 0;
}
 
4) Operações matemáticas
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
 
5) Palíndromo
#include <stdio.h>
#include <string.h>

int palindromo(char palavra[]) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while(inicio < fim) {
        if(palavra[inicio] != palavra[fim]) {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if(palindromo(palavra))
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");

    return 0;
}
 
6) Dia semana
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
 
7) Ordem dos números
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
 
8) Soma das áreas dos círculos
A área do círculo é:
A=πr2A = \pi r^2A=πr2
rrr
 
A=πr2≈28.27A = \pi r^2 \approx 28.27A=πr2≈28.27
C=2πr≈18.85C = 2\pi r \approx 18.85C=2πr≈18.85
r = 3.00
#include <stdio.h>

float area(float raio) {
    return 3.14 * raio * raio;
}

int main() {
    float raio, soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Raio: ");
        scanf("%f", &raio);

        soma += area(raio);
    }

    printf("Soma das areas: %.2f\n", soma);

    return 0;
}
 
9) Substituir vogais por *
#include <stdio.h>
#include <string.h>

void substituir(char str[]) {
    for(int i = 0; i < strlen(str); i++) {

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
           str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||
           str[i]=='O'||str[i]=='U') {

            str[i] = '*';
        }
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    substituir(palavra);

    printf("%s\n", palavra);

    return 0;
}
 
10) Contar vogais e consoantes
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contarVogais(char nome[]) {
    int cont = 0;

    for(int i = 0; i < strlen(nome); i++) {
        char c = tolower(nome[i]);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cont++;
    }

    return cont;
}

int contarConsoantes(char nome[]) {
    int cont = 0;

    for(int i = 0; i < strlen(nome); i++) {
        char c = tolower(nome[i]);

        if(isalpha(c) &&
           !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) {

            cont++;
        }
    }

    return cont;
}

int main() {
    char nome[100];

    printf("Digite o nome completo: ");
    fgets(nome, 100, stdin);

    printf("Vogais: %d\n", contarVogais(nome));
    printf("Consoantes: %d\n", contarConsoantes(nome));

    return 0;
}
 

11) Negativos por zero
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
 
12) Contar pares e ímpares
#include <stdio.h>

int main() {
    int v[15];
    int pares = 0, impares = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    return 0;
}
 
13) Contar letras
#include <stdio.h>

int main() {
    char letras[20];
    char busca;
    int cont = 0;

    for(int i = 0; i < 20; i++) {
        scanf(" %c", &letras[i]);
    }

    printf("Digite a letra para buscar: ");
    scanf(" %c", &busca);

    for(int i = 0; i < 20; i++) {
        if(letras[i] == busca)
            cont++;
    }

    printf("Quantidade: %d\n", cont);

    return 0;
}
 
14) Ordenar nomes
#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][50];
    char temp[50];

    for(int i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {

            if(strcmp(nomes[i], nomes[j]) > 0) {

                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("Ordem crescente:\n");

    for(int i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
 
15) Primeiro número negativo
#include <stdio.h>

int main() {
    int v[20];
    int indice = -1;

    for(int i = 0; i < 20; i++) {
        scanf("%d", &v[i]);

        if(v[i] < 0 && indice == -1)
            indice = i;
    }

    printf("Indice: %d\n", indice);

    return 0;
}
 
16) Índice menor/maior valor
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
 
17) Vetor invertido e soma dos positivos
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
 
18) Contar vogais no vetor
#include <stdio.h>

int main() {
    char letras[20];
    int vogais[5] = {0};

    for(int i = 0; i < 20; i++) {
        scanf(" %c", &letras[i]);

        switch(letras[i]) {
            case 'a': vogais[0]++; break;
            case 'e': vogais[1]++; break;
            case 'i': vogais[2]++; break;
            case 'o': vogais[3]++; break;
            case 'u': vogais[4]++; break;
        }
    }

    printf("a: %d\n", vogais[0]);
    printf("e: %d\n", vogais[1]);
    printf("i: %d\n", vogais[2]);
    printf("o: %d\n", vogais[3]);
    printf("u: %d\n", vogais[4]);

    return 0;
}
 
19) Separar pares e ímpares
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
 
20) Terceiro menor valor
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
