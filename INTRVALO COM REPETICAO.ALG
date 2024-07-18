Algoritmo "intervalo com repeticao"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : calcula quantas vezes o intervalo foi satisfeito, dado um numero digitado.
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 16/04/2024
Var
// Seção de Declarações das variáveis 
 intervalo1, intervalo2, intervalo3, intervalo4, entrada: inteiro;

Inicio
	// Seção de Comandos, procedimento, funções, operadores, etc... 
	// lendo o primeiro numero
	escreval ("Digite um numero: ")
	leia (entrada)

	// verificando se o numero satisfaz para entrar na estrutura de repeticao
	enquanto (entrada>=0) faca
	
	// verifica o numero e adiciona +1 a variavel intervalo correspondente
		 se (entrada>=0) e (entrada<=25) entao
		                 intervalo1 <- intervalo1 + 1
		 senao
		 
		 	se (entrada>25) e (entrada<=50) entao
		                 intervalo2 <- intervalo2 + 1
		        senao
		        
		        	se (entrada>50) e (entrada<=75) entao
		                	 intervalo3 <- intervalo3 + 1
		                senao
		                
		                	se (entrada>75) e (entrada<=100) entao
		              			intervalo4 <- intervalo4 + 1
		 			fimse
		                	 
				fimse
		                 
		 	fimse
		                 
		 fimse
		 
		// Solicita um novo numero
		 escreval ("Digite um numero: ")
		 leia (entrada)

	fimenquanto
// imprime os resultados quando o loop acabar
escreval ("Total de [0,25]: ", intervalo1)
escreval ("Total de [26,50]: ", intervalo2)
escreval ("Total de [51,75]: ", intervalo3)
escreval ("Total de [76,100]: ", intervalo4)

Fimalgoritmo
