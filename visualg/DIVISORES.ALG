Algoritmo "Divisores"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Calcula todos o divisores de um numero
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
   i, valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva ("Digite um numero: ")
   leia (valor)
   para i de 1 ate valor faca // percorre de 1 ate o valor digitado
        se (valor%i =0) entao // se e' divisor
           escreva (i)  // escreve o divisor
        fimse
   fimpara

Fimalgoritmo