programa
{
	
	funcao inicio()
	{
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
 * @POSICAO-CURSOR = 612; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */