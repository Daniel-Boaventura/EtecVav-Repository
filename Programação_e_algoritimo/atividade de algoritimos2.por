programa
{
    funcao inicio()
    {
        real base, altura, area
        
        para(inteiro contador = 1; contador <= 5; contador++)
        {
            escreva("\n--- Triângulo ", contador, " ---\n")
            
            escreva("Digite a base: ")
            leia(base)
            
            escreva("Digite a altura: ")
            leia(altura)
            
            area = (base * altura) / 2
            
            escreva("Área do triângulo ", contador, " = ", area, "\n")
        }
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 517; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */