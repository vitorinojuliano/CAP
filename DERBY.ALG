Algoritmo "Derby"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Calcula quantos jogos e quem ganhou os derby
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
// Seção de Declarações das variáveis 
   palmeiras, corinthias, derbysP, derbysC, derbysE, derby, novo: inteiro
   vencedor: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   novo <-1
   derbysP <- 0
   derbysC <- 0
   derbysE <- 0
   derby <- 0
   
   repita
         se (novo = 1) entao  // condicao para entrar na estrutura
               escreva ("Gols do Palmeiras: ") // leitura das variaveis
               leia (palmeiras)
               escreva ("Gols do Corinthias: ")
               leia (corinthias)
               
               se (palmeiras>corinthias) entao // verifica se palmeiras ganhou
                  derbysP <- derbysP + 1  // soma vitoria para palmeiras
                  derby <- derby + 1   // soma mais um jogo
                  
               senao

                 se (corinthias>palmeiras) entao // verifica se corinthias ganhou
                     derbysC <- derbysC + 1 // soma vitoria para corinthias
                     derby <- derby + 1  // soma um jogo

                 senao // caso de empate
                       derbysE <- derbysE + 1
                       derby <- derby + 1
                 fimse
              fimse
               

         fimse

         escreval ("novo derby (1-sim 2-nao)") // condicao de parada do loop
         leia (novo)
   ate (novo = 2)
	// imprimir os valores na tela
   escreval (derby," derbys")
   escreval ("Palmeiras: ",derbysP)
   escreval ("Corinthias: ",derbysC)
   escreval ("Empates: ",derbysE)
   se (derbysP > derbysC) entao // placar final vitoria palmeiras
       vencedor <- "Palmeiras"
   senao

       se (derbysP < derbysC) entao     // vitoria corinthias
             vencedor <- "Corinthias"
       senao
            vencedor <- "Ninguem" // ninguem ganhou
       fimse

    fimse

                               
	// imprime vencedor 
    escreval (Vencedor," venceu mais!")
   
Fimalgoritmo
