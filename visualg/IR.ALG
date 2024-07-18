Algoritmo "IR"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Calcula o Imposto de renda dado um salario
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 10/04/2024
Var
// Seção de Declarações das variáveis 
   salario, IR : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreva ("Digite o salario: ")
  leia (salario)
  // verifica se o salario e menor que 2000
  se salario <=2000 entao
     escreva("Isento")
  senao
  // verifica se e maior que 4500
       se salario > 4500 entao
          IR <- (1000*0.08) + (1500*0.18)+((salario-4500)*0.28)
          
       senao
       //se e menor ou igual a 3000 e maior que 2000
          se salario<=3000 entao
             IR<- (salario-2000) * 0.08
          senao
          //caso seja maior que 3000 e menor que 4500
             IR <- 1000*0.08 + ((salario-3000)*0.18)
          fimse

       fimse
       // imprime e coloca o valor com duas casas apos a virgula
   escreva (IR:6:2)
  fimse


Fimalgoritmo