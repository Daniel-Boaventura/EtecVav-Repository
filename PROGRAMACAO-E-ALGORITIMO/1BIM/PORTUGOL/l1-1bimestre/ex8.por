programa
{
	
	funcao inicio()
	{
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
		real total = salario + comissao

		escreva("Salario final: ", total)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 357; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */