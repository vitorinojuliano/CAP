Algoritmo "Repetição"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : ele garante que os numeros somados são menos que 850
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
enquanto (soma<850) faca // repete enquanto menor que 850
         escreva ("Digite um numero: ")
         leia (num)
         
         soma <- soma + num
         cont <- cont + 1

fimenquanto

media <- soma / cont  // calcula media 
escreva ("Média = ", media:4:2)

Fimalgoritmo
