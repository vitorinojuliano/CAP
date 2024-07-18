Algoritmo "Taxa de crescimento"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Calcula quanto tempo leva ate ter mais ha em a que em hb
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 17/04/2024
Var
	// Seção de Declarações das variáveis 
	 Ha, Hb, Ta, Tb, ano: real;

Inicio
	// Seção de Comandos, procedimento, funções, operadores, etc... 
	ano <- 0
	// SOlicita as variaveis
	 escreval ("Digite o Ha: ")
	 leia (Ha)
	 escreval ("Digite a Ta: ")
	 leia (Ta)
	 escreval ("Digite o Hb: ")
	 leia (Hb)
	 escreval ("Digite a Tb: ")
	 leia (Tb)
	 // calcula quanto tempo leva ate chegar a quantidade de habitantes em ha
	enquanto (Ha < Hb) faca
		 Ha <- Ha + (Ha*(Ta/100))
		 Hb <- Hb + (Hb*(Tb/100))
		 ano <- ano + 1
	fimenquanto
	// escreve na tela
	escreval (ano, " Ano(s)")

Fimalgoritmo
