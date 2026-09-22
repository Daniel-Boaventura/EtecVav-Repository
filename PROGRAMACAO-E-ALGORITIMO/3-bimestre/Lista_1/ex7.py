"""
    Autor: Daniel Boaventura e Pablo
    Data:  Agosto/2026
    Descrição: Lê 10 números e conta quantos são positivos, negativos e zeros.
"""

contador = 1
positivos = 0
negativos = 0
zeros = 0


while contador <= 10:
 numero = int(input(f"Digite o {contador}º número (positivo, negativo ou zero): "))

 if numero > 0:
  positivos += 1

 elif numero < 0:
  negativos += 1

 else:
  zeros += 1

 contador += 1

print("Positivos:", positivos)
print("Negativos:", negativos)
print("Zeros:", zeros)
