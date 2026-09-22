"""
    Autor: Daniel Boaventura e Pablo
    Data: Agosto/2026
    Descrição: Simula um sistema simples de senha com até 3 tentativas.
"""

senha_correta = 1234
tentativas = 1
limite_tentativas = 3

senha = int(input("Digite a senha: "))

while senha != senha_correta and tentativas < limite_tentativas:
    print("Senha incorreta. Tente novamente: ")
    senha = int(input("Digite a senha: "))

    tentativas += 1

if senha == senha_correta:
    print("Acesso Liberado.")

else:
    print("Acesso negado.")        