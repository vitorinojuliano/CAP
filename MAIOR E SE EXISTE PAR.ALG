Algoritmo "Maior e se existe par"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : procura o maior e se exitem par no intervalo
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
   i, valor, maior, par: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   maior <- 0
   par <- 0
   
   // Percorre de 1 a 10
   para i de 1 ate 10 faca
   
   // solicita 10 numeros para o usuario
        escreval ("Digite um numero: ")
        leia (valor)
        
   // verifica qual e' o maior numero digitado
        se (maior < valor) entao
           maior <- valor
        fimse
   // verifica se e' par 
        se (valor%2 = 0) entao
           par <- par + 1
        fimse
   fimpara
   
   escreval ("Maior = ", maior)
   // se a condicao for verdadeira imprime a mensagem par, ou nao existe
   se (par > 0) entao
      escreva ("Existe par")
   senao
        Escreva ("Não existe par")
   fimse

Fimalgoritmo
