"""
    Autor: Daniel Boaventura e Pablo
    Data: Agosto/2026
    Descrição: Lê um número inteiro e informa se ele é positivo, negativo ou zero.
"""

print("Digite um número inteiro")
numero = int(input("Número: "))

if numero > 0:
    print("O seu número é positivo")
elif numero == 0:
    print("O número é nulo (igual a 0)")
else:
    print("O seu número é negativo")