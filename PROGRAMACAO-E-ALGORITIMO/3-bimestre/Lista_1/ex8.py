"""
    Autor: Daniel Boaventura e Pablo
    Data: Agosto/2026
    Descrição: Verifica se um número inteiro positivo é primo.
"""

quantidade_divisores = 0
divisor = 1

numero = int(input("Digite um numero positivo: "))

if numero > 0:
     while divisor <= numero:
          if numero % divisor == 0:

               quantidade_divisores += 1

          divisor += 1

     if quantidade_divisores == 2:
          print("O numero e primo")

     else:
          print("O numero nao e primo")

else:
     print("Numero invalido")               