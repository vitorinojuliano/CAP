Algoritmo "Calcula media c/ para"
// Disciplina   : CAP
// Professor   : Joice
// Descri��o   : Dado um N, voce precisa digitar N numeros e calcular a media
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Se��o de Declara��es das vari�veis 
 valor, valores, total: inteiro;
 media: real;

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
total <-0
escreval ("Quantos numeros quer ler: ")
leia (valor)
para valor de 1 ate valor faca
      escreval ("Digite um numero: ")
      leia (valores)
       total <- total + valores
fimpara
media <- total/valor
escreval ("Media = ",media:4:2)

Fimalgoritmo