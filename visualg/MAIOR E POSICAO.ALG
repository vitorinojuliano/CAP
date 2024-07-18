Algoritmo "maior e posicao"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Dado cem numero calcula o maior e a posição dele
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 21/04/2024

var
	qtdvalores, valor, gastos, c, i : inteiro
	t : caractere

inicio
	// inicializando variaveis 
   	gastos <- 0
   	valor <- 0

	// solicitando quantos valores deseja ler
   escreva ("Quantos valores foram citados? ")
   leia (qtdvalores)

   para i de 1 ate qtdvalores faca // repete qtvalores vezes
   
	   leia(t, c) // Como eu faço para serem lidos na mesma linha?
	   
	   se (t= "g") entao // se sao gastos
	   	gastos <- gastos + c
	   senao
	   
	   	se (t="v") entao // se sao valores
	   		valor <- valor + c
	   	fimse
	   fimse
   fimpara
   
   se (gastos > valor) entao // condicao para a GREVE!
   	escreva ("Nao vai ter corte, vai ter luta!")
   senao
   	escreva ("a greve vai parar!")
   fimse

fimalgoritmo
