Algoritmo "Decrescente"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : Coloca tr�s numeros em ordem descrescente
// Autor(a)    : Juliano Vitorino da Silva.
// Data atual  : 09/04/2024
Var
   a,b,c,x:inteiro
// Se��o de Declara��es das vari�veis 


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Digite tr�s numeros (um de cada vez):")
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