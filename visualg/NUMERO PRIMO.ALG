Algoritmo "Numero primo"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Verifica se e' primo ou nao
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
   i, valor, contador: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   contador <- 0
   escreva ("Digite um numero: ") // solicita um valor ao usuario
   leia (valor)
   
   para i de 1 ate valor faca    // percorre de 1 ate o valor
        se (valor%i=0) entao     // para cada divisor adiciona 1 ao contador
           contador <- contador + 1
        fimse
   fimpara
   
   se (contador = 2) entao  // verifica se tem mais de dois divisores
      escreva ("Numero primo") // se verdadeiro entao e' primo
   senao
        escreva ("Não primo")
   fimse

Fimalgoritmo