Algoritmo "Maior numero c para"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : Dado um N calcula qual e o maior dentre os N digitados
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Se��o de Declara��es das vari�veis 
   valor, numero, maior, i: inteiro;

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   maior <- 0
   escreval ("Digite quantos numeros quer ler: ")
   leia (valor)
   para i de 1 ate valor faca   // Colocar condi��o de para i != valor
        escreval ("Digite um numero: ")
        leia (maior)
        se (maior < numero) entao
           maior <- numero
        fimse
   fimpara
   escreval ("Maior = ", maior)

Fimalgoritmo