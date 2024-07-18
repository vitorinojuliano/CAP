Algoritmo "Bissexto"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Dada uma data calcula se o ano 'e bissexto ou nao
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 11/04/2024
Var
// Seção de Declarações das variáveis 
 dia, mes, ano: inteiro
 verificador, diaf: logico

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval ("Digite uma data (Dia, mes, ano), um em cada linha: ")
   leia (dia, mes, ano)
   // verifica se o ano e bissexto
   verificador <- (ano%400=0) ou ((ano%4=0) e (ano%100 <>0))
   // verifica se os meses estao com o intervalo certo
    escolha mes
        caso 1,3,5,7,8,10,12
             diaf <- dia <=31
        caso 4,6,9,11
             diaf <- dia <=30
        caso 2
    // verifica se o mes de fevereiro esta certo nos anos bissextos
             se verificador = VERDADEIRO entao
                diaf <- dia <=29
             senao
                  diaf <- dia<=28
             fimse
    fimescolha
    // caso tudo esteja certo imprime ano bissexto
    se (verificador = VERDADEIRO) e (diaf = VERDADEIRO) entao
       escreval ("Ano bissexto")
    senao
    // caso dia nao esteja no intervalo mensagem de data invalida
         se diaf = FALSO entao
            escreval ("Data invalida")
         senao
    // data certa mas nao e bissexto
              escreval ("Ano nao bissexto")
         fimse
    fimse

Fimalgoritmo

