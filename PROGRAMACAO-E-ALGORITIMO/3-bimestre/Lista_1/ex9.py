"""
    Autor: Daniel Boaventura e Pablo
    Data: Agosto/2026
    Descrição: Calcula o fatorial de um número inteiro positivo.
"""

contador = 1
fatorial = 1

numero = int(input("Digite um numero positivo: "))

if numero >= 0:
    while contador <= numero:
        fatorial = fatorial * contador
        contador += 1

    print("Fatorial: ", fatorial) 

else:
    print("Numero invalido.")