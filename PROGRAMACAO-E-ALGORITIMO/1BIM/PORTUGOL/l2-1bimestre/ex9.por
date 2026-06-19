programa {

   inclua biblioteca Matematica

   funcao inicio() {

      real numero, raiz

      escreva("Digite um número: ")
      leia(numero)

      raiz = Matematica.raiz(numero, 2)

      se (raiz == inteiro(raiz)) {
         escreva("É quadrado perfeito")
      }
      senao {
         escreva("Não é quadrado perfeito")
      }

   }

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 346; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */