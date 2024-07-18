Algoritmo "dia da semana"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : dada uma data calcula que dia da semana é
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 10/04/2024
Var
// Seção de Declarações das variáveis 
   dia,mes,ano,a,b,c,d,eh,f,g,h,i,j: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval ("digite o dia, mês e ano (enter após digitar cada)")
   leia (dia,mes,ano)
    a <- int((12-mes)/10)
    b <- ano-a
    c <- mes + (12*a)
    d <- int(b/100)
    eh <- int(d/4)
    f <- 2-d+eh
    g <- int(365.25*b)
    h <- int((30.60*(c+1)))
    i <- f+g+(h)+dia+5
    j <- (i%7)
    escolha j
            caso 0
                 escreva ("Sab")
            caso 1
                 escreva ("Dom")
            caso 2
                 escreva ("Seg")
            caso 3
                 escreva ("Ter")
            caso 4
                 escreva ("Qua")
            caso 5
                 escreva ("Qui")
            caso 6
                 escreva ("Sex")
    fimescolha

Fimalgoritmo