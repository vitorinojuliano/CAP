Algoritmo "Perfil"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Calcula o perfil de acordo com o ano
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 10/04/2024
Var
// Seção de Declarações das variáveis 
   ano,n1,n2,n3,n4,s,verificador: inteiro

Inicio
	// Seção de Comandos, procedimento, funções, operadores, etc... 
	 escreva ("Escreva um ano: ")
	 leia (ano)
	 
	 // separa cada numero do ano
	 n1 <- ano\1000
	 n2 <- (ano-((n1*1000)+(n1*10)))\100
	 n3 <- (ano-((n1*1000)+(n2*100)))\10
	 n4 <- (ano-((n1*1000)+(n2*100)+(n3*10)))\1
	 
	 // soma todos os digitos
	 s <- n1+n2+n3+n4
	 
	 // pega o resto da divisão
	 verificador <- s%5
	 
	 // verifica em que perfil se encaixa
	 escolha verificador
		 caso 0
		      escreval ("Tímido")
		 caso 1
		      escreval ("Sonhador")
		 caso 2
		      escreval ("Paquerador")
		 caso 3
		      escreval ("Atraente")
		 caso 4
		      escreval ("Irresistível")
	 fimescolha

Fimalgoritmo
