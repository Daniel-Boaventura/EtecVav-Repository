"""
    Autor: Daniel Boaventura e Pablo
    Data:  Agosto/2026
    Descrição: Calcula a média de notas válidas entre 0 e 10 usando while.
"""

soma = 0
quantidade = 0
 
nota= float(input("Digite uma nota entre 0 e 10:  "))

while nota >= 0 and nota <= 10:
 soma = nota + soma 

 quantidade += 1

 nota= float(input("Digite uma outra nota entre 0 e 10:  "))

if quantidade > 0:
  print(f"Media das notas: {soma / quantidade}")

else:
  print("Nenhuma nota valida foi digitada.")