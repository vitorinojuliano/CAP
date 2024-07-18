Algoritmo "NOVO SALARIO, GANHO E TAXA"
// Disciplina   : CAP
// Professor   : Joice
// Descrição   : Calcula novo salario, ganho e taxa
// Autor(a)    : Juliano Vitorino da Silva
// Data atual  : 09/04/2024
Var
// Seção de Declarações das variáveis 
salario, novosalario, ganho: real
taxa: caracter

Inicio
		// Seção de Comandos, procedimento, funções, operadores, etc... 
		escreva ("Digite o salario: ")
		leia (salario)
		
		// verifica se é menor que 400 e calcula novo salario, ganho e taxa
		se salario <= 400.00 entao
		   novosalario <- salario + (salario*0.15)
		   ganho <- salario*0.15
		   taxa <- "15%"
		senao	// Verifica se esta no intervalo de 400,01 a 800,00 e calcula novo salario, ganho e taxa
			se (salario <= 800.00) entao
		   		novosalario <- salario + (salario*0.12)
		   		ganho <- salario*0.12
		   		taxa <- "12%"
		   	senao
		   		// Verifica se esta no intervalode de 800,01 a 1200,00 e calcula novo salario, ganho e taxa
				se (salario <= 1200.00) entao
		  			novosalario <- salario + (salario*0.10)
		   			ganho <- salario*0.10
		   			taxa <- "10%"
		   		senao
		   			// Verifica se esta no intervalode de 1200,01 a 2000,00 e calcula novo salario, ganho e taxa
					se (salario <= 2000.00) entao
		   				novosalario <- salario + (salario*0.07)
		   				ganho <- salario*0.07
		   				taxa <- "7%"
		   			senao
		   				// verifica se é maior que 2000,00 e calcula novo salario, ganho e taxa
	   					novosalario <- salario + (salario*0.04)
	   					ganho <- salario*0.04
	   					taxa <- "4%"
		   				
					fimse
		   		
				fimse
		   		
			fimse
		   
		fimse
		
		// escreve as informações de novo salario, ganho e taxa
		Escreval ("Novo salario:",novosalario:6:2)
		Escreval ("Reajuste ganho:",ganho:6:2)
		Escreval ("Em percentual:",taxa)
Fimalgoritmo
