//Daniel M. Boaventura
// 19.06.2026
//Oque o Programa Faz:
//Substituir vogais por *


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
