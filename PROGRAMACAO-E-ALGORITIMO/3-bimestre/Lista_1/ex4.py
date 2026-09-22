"""
Autor: Daniel Boaventura e Pablo
Data: Agosto/2026
Descrição: Calcula a soma dos números pares de 1 até um número informado.
"""

contador = 1
soma = 0

numero = int(input("Digite um numero inteiro positivo: "))

if numero > 0:
    while contador <= numero:
        if contador % 2 == 0:
            soma = soma + contador

        contador += 1

    print(f"Soma dos pares: {soma}")

else:
    print("Numero invalido.")