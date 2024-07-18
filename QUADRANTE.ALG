Algoritmo "Quadrante"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Dada duas coordenadas calcula o seu quadrante
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 16/04/2024
Var
// Seção de Declarações das variáveis 
  X,Y: inteiro;
  quadrante: caracter;

Inicio
	// Seção de Comandos, procedimento, funções, operadores, etc...
	// Solicita as duas coordenadas
	escreval ("Digite coordenada X: ")
	leia (X)
	escreval ("Digite coordenada Y: ")
	leia (Y)
	
	// verifica se compre os requisitos para entrar no loop
	enquanto (X<>0) e (Y<>0) faca
	
		// verifica em qual quadrante esta e adiciona a variavel "quadrante"
		 se (X>0) e (Y>0) entao
		    quadrante <- "Primeiro"
		 senao
		 	se (X>0) e (Y<0) entao
		    		quadrante <- "Quarto"
		    	senao
		    		se (X<0) e (Y>0) entao
		    			quadrante <- "Segundo"
		    		senao
		    			quadrante <- "Terceiro"
		    			
		 		fimse
		    		
		 	fimse
		 fimse
		 
		// Imprime o quadrante correspondente
		 escreval (quadrante)
		// Solicita duas novas coordenadas
		 escreval ("Digite coordenada X: ")
		 leia (X)
		 escreval ("Digite coordenada Y: ")
		 leia (Y)
		 
	fimenquanto

Fimalgoritmo
