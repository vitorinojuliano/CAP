Algoritmo "Divisores"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : Calcula todos o divisores de um numero
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Se��o de Declara��es das vari�veis 
   i, valor: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva ("Digite um numero: ")
   leia (valor)
   para i de 1 ate valor faca // percorre de 1 ate o valor digitado
        se (valor%i =0) entao // se e' divisor
           escreva (i)  // escreve o divisor
        fimse
   fimpara

Fimalgoritmo