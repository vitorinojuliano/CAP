Algoritmo "Decrescente"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Coloca três numeros em ordem descrescente
// Autor(a)    : Juliano Vitorino da Silva.
// Data atual  : 09/04/2024
Var
   a,b,c,x:inteiro
// Seção de Declarações das variáveis 


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Digite três numeros (um de cada vez):")
leia (a,b,c)

se (a<b) entao
    x<-a
    a<-b
    b<-x
fimse

se (b<c) entao
    x<-b
    b<-c
    c<-x
fimse

se (a<b) entao
    x<-a
    a<-b
    b<-x
fimse

escreva ("Numeros em ordem decrescente",a,b,c)



Fimalgoritmo