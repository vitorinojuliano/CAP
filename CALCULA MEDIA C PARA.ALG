Algoritmo "Calcula media c/ para"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Dado um N, voce precisa digitar N numeros e calcular a media
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
 valor, valores, total: inteiro;
 media: real;

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
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