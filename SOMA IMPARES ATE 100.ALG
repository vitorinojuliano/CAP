Algoritmo "Soma impares ate 100"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Ele calcula o valor da soma de todos os numeros pares de 1 a 100
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
	// Seção de Declarações das variáveis 
	num, acumulador: inteiro;

Inicio
	// Seção de Comandos, procedimento, funções, operadores, etc... 
	acumulador <- 0
	para num de 1 ate 100 passo 2 faca
	     acumulador <- acumulador + num
	fimpara
	escreva (acumulador)

Fimalgoritmo
