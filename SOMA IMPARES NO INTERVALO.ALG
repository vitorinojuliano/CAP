Algoritmo "Soma impares no intervalo"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Soma os impares dentro de um intervalo de x e y
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
   x,y,soma,i, troca : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   soma <- 0 // somador e trocador definidos
   troca <- 0
   escreva ("Digite x: ")   // solicitando dois numeros
   leia (x)
   escreva ("Digite y: ")
   leia (y)

   se (x>y) entao  // verifica e deixa em x o menor valor
      troca <- x
      x <- y
      y <- troca
   fimse

   se (x%2<>0) entao // se x for impar acrescenta mais 2
      x <- x+2
   fimse
   
   se (y%2<>0) entao // se y for impar subtrai 2
      y <- y-2
   fimse
   
   
   para i de x ate y passo 2 faca // soma os numeros passando de 2 em 2
        soma <- soma + i
        escreva (i)
   fimpara
   
   escreva (soma)   // imprime a soma dos impares do intervalor
   
Fimalgoritmo