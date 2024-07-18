Algoritmo "Nota com arranjo"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Dada duas notas calcula a media
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
   novo: inteiro
   p1,p2, media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
 novo <- 1 // variavel para comecar direto
 repita
         se (novo = 1) entao // condicao p/ entrar na estrutura
         
            escreva ("P1: ")  // ler nota 1
            leia (p1)
            enquanto (p1>10) ou (p1<0) faca // pede numero ate ser valido de p1
                     escreval ("nota invalida")
                     
                     escreva ("P1: ")
                     leia(p1)
            fimenquanto
               
               
            escreva ("P2: ")
            leia (p2)
            enquanto (p2>10) ou (p2<0) faca  // pede numero ate ser valido de p2
                     escreval ("nota invalida")
                     
                     escreva ("P2: ")
                     leia(p2)
            fimenquanto
            
            media <- (p1+p2)/2  // calculo de media dada as notas validas
            escreval ("media = ",media:2:2)

         fimse


       escreval ("novo calculo (1-sim 2-nao) ") // mensagem para sair do loop
       leia (novo)

 ate (novo=2)
 

Fimalgoritmo