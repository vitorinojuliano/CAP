Algoritmo "soma de intervalo"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : Dado dois numeros mostra os n do intervalo e a soma deles
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 22/04/2024
Var
// Se��o de Declara��es das vari�veis 
   m,n,x, i, total: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
    total <- 0
    leia (m,n) // lendo variaveis
    enquanto (m>0) e (n>0) faca
       se (m>n) entao  // trocando para m sempre ser o maior
             x <- m
             m <- n
             n <- x
       fimse
       
       para i de m ate n faca     // de m ate n somando i e mostrando i na tela
            total <- total + i
            escreva (i)

       fimpara
       escreval (" soma = ",total) // na mesma linha imprime a soma total
       
       total <- 0  // zerando a soma
       leia (m,n) // lendo novas vari�veis
     fimenquanto
Fimalgoritmo