"""
    Autor: Daniel Boaventura e Pablo
    Data: Agosto/2026
    Descrição: Lê dois números inteiros e informa qual é o maior ou se são iguais.
"""


print("Digite o primeiro Número")
numero = int(input("Número: "))

print("DIgite um segundo número")
numero2 = int(input("número: "))

if numero > numero2:
    print(f"O maior numero é: {numero}")

elif numero2 > numero:
    print(f"O maior numero é: {numero2}")

else:
    print(f"Os numeros são iguais")
