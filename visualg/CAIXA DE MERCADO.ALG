Algoritmo "Caixa de mercado"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : dada o codigo e a quantidade do produto ele calcula o total
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 15/04/2024
Var
// Se��o de Declara��es das vari�veis 
cod, quantidade: inteiro;
valor, total: real;


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
total <-0
escreva ("Digite o cod: ")
leia (cod)

enquanto (cod <> 0) faca

         escolha cod
                 caso 1
                      valor <- 0.5
                 caso 2
                      valor <- 1
                 caso 3
                      valor <- 4
                 caso 5
                      valor <- 7
                 caso 9
                      valor <- 8
                 outrocaso
                          escreval ("C�digo invalido")
                          valor <-0
         fimescolha
         se (valor <> 0) entao
            escreva ("Digite a quantidade: ")
            leia (quantidade)
            total <- total + (valor*quantidade)
         fimse
         escreva ("Digite o cod: ")
         leia(cod)
fimenquanto
escreval ("Compra = ",total)

Fimalgoritmo