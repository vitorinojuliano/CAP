Algoritmo "Exercicio 7"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : Imprime na tela uma grade com numeros de 1 a 9 e somando
// 6,5,4 neles
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Se��o de Declara��es das vari�veis 
   i, j, k, auxiliar: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   auxiliar <- 0
   para i de 1 ate 9 passo 2 faca // percorre de 1 a 9 pulando em 2
        para j de 6 ate 4 passo -1 faca  // de 6 a 4 subtraindo 1
              auxiliar <- i + j // adiciona i mais j ao auxiliar
              escreval ("I=",i,"J=",auxiliar) // imprime os valores
        fimpara
        
   fimpara

Fimalgoritmo