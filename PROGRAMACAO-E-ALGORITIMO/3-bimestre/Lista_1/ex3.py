"""
Autor: Daniel Boaventura e Pablo
 Data: Agosto/2026
 Descrição: Lê um número inteiro positivo e exibe a contagem de 1 até esse número.
"""
contador = 1

numero = int(input("Digite um número positivo: "))

if numero > 0:
    while contador <= numero:
        print(f"{contador}")
        contador += 1

else:
   print("O número digitado é invalido, digite um número positivo")
