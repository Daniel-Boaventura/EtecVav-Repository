programa
{
	
	funcao inicio()
	{
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
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 431; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */