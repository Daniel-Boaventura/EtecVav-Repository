"""
    Autor: Daniel Boaventura e Pablo
    Data: Junho/2026
    Descrição: Lê um número de 1 a 10 e exibe sua tabuada, validando a entrada.
"""

contador = 1

numero = int(input("Digite um numero de 1 a 10: "))

while numero < 1 or numero > 10:
 print("Valor invalido. Digite novamente: ")

while contador <= 10:
 print(f"{numero} x {contador} = {numero * contador}")
 contador += 1