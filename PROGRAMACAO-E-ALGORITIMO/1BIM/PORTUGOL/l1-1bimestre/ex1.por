programa
{
	
	funcao inicio()
	{
		inteiro cavalos	

		escreva("qual a quantidade de cavalos? ")
		leia(cavalos)

		inteiro ferraduras =  cavalos * 4

		escreva("quantidade de cavalos: ", cavalos,"\n")
		escreva("a quantidade de ferraduras serão: ", ferraduras)

			//exercicio 2
		cadeia nome //apresentar idade do usuario em mes dias e anos
		inteiro idade
		

		escreva("digite seu nome:  ")
		leia(nome)
		escreva("digite sua idade em anos: ")
		leia(idade)

		inteiro meses = idade * 12
		inteiro dias = idade * 365
		
		escreva("nome: ", nome, "\n")
		escreva("idade: ", idade, "\n")
		escreva("idade em meses: ", meses, "\n")
		escreva("idade em dias: ", dias, "\n")


			//exercicio 3 
		real base
			
		escreva("digite a base do triângulo: ")
		leia(base)

		real altura
		
		escreva("digite a altura do triângulo: ")
		leia(altura)

		real area = (base * altura) /2

		escreva("a área do triângulo é: ", area)

		// exercício 4
		cadeia nome
		inteiro idade 

   		escreva("Digite seu nome: ")
   		leia(nome)

   		escreva("Digite sua idade em anos: ")
   		leia(idade)

   		inteiro meses = idade * 12
   		inteiro dias = idade * 365

   		escreva("Nome: ", nome)
   		escreva("\n")
   		escreva("Idade: ", idade)
   		escreva("Idade em meses: ", meses)
   		escreva("Idade em dias: ", dias)

   			// exercpicio 5
   		real preco
		real valor
		real litros

		escreva("Preço do litro: ")
		leia(preco)

		escreva("Valor que deseja abastecer: ")
 		leia(valor)
	
	
		litros = valor /preco

   		escreva("Preço do litro: ", preco)
		escreva("Valor abastecido: ", valor)
		escreva("Quantidade de litros: ", litros)

			//exercício 6

		real pesoKg

		escreva("Digite o peso em kg: ")
		leia(pesoKg)

		real pesoG = pesoKg * 1000

		escreva("Peso em gramas: ", pesoG)

		// exercício 7
		real baseMenor
		real baseMaior
		real altura 

		escreva("Base menor: ")
		leia(baseMenor)

		escreva("Base maior: ")
		leia(baseMaior)

		escreva("Altura: ")
		leia(altura)

		real area = ((baseMenor + baseMaior) * altura) / 2

		escreva("Area do trapezio: ", area)

			// exercício 7
		real salario
		real venda
		real percentual

		escreva("Salario fixo: ")
		leia(salario)

		escreva("Valor das vendas: ")
		leia(vendas)

		escreva("Percentual de comissao (%): ")
		leia(percentual)

		real comissao = vendas * percentual / 100
		real = salario + comissao

		("Salario final: ", total)

			// exercicio 8
			Real salario
		real venda
		real percentual

 		escreva("Salario fixo: ")
 		leia(salario)

 		escreva("Valor das vendas: ")
 		leia(vendas)

		escreva("Percentual de comissao (%): ")
		leia(percentual)

		real comissao = vendas * percentual / 100
		real total = salario + comissao

		escreva("Salario final: ", total)
		
			// exercicio 9
		real peso
		real percentual 

		escreva("Peso do boi: ")
		leia(peso)

		escreva("Percentual de engorda (%): ")
		leia(percentual)

		real novoPeso = peso + (peso * percentual / 100)

		escreva("Novo peso do boi: ", novoPeso)
			// exercicio 10
		inteiro moeda1
		inteiro moeda5
		inteiro moeda10
		inteiro moeda25
		inteiro moeda50
		inteiro moedaReal

		escreva("Moedas de 1 centavo: ")
		leia(moeda1)

		escreva("Moedas de 5 centavos: ")
		leia(moeda5)

		escreva("Moedas de 10 centavos: ")
		leia(moeda10)

		escreva("Moedas de 25 centavos: ")
		leia(moeda25)

		escreva("Moedas de 50 centavos: ")
		leia(moeda50)

		escreva("Moedas de 1 real: ")
		leia(moedaReal)

		real total  = (moeda1*0.01) + (moeda5*0.05) + (moeda10*0.10) + (moeda25*0.25) + (moeda50*0.50) + (moedaReal*1)
		escreva("Total em reais: ", total)
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1625; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */