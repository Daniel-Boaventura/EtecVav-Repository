programa
{
	
	funcao inicio()
	{
		real peso
		real percentual 

		escreva("Peso do boi: ")
		leia(peso)

		escreva("Percentual de engorda (%): ")
		leia(percentual)

		real novoPeso = peso + (peso * percentual / 100)

		escreva("Novo peso do boi: ", novoPeso)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 265; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */