Algoritmo "Repetição - REPITA"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : ele garante que os numeros somados são menos que 850 com repita
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 15/04/2024
Var
// Seção de Declarações das variáveis
   soma, cont, num: inteiro;
   media : real;

Inicio
	// Seção de Comandos, procedimento, funções, operadores, etc...
	soma <-0
	cont <- 0
	repita
	      escreva ("Digite um numero: ")
	      leia (num)
	      soma <- soma + num
	      cont <- cont + 1

	ate  (soma >= 850) // repete ate soma maior ou igual a 850

	media <- soma / cont
	escreva ("Média = ", media:4:2)

Fimalgoritmo
