Algoritmo "10%"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/03/2022
Var
// Seção de Declarações das variáveis 

   nomFunc:caractere
   
   codMaq:inteiro
   
   totalProdu:inteiro
   
   totalDefei:inteiro
   
   dez:real
   

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

   escreval("Digite o nome do funcionario")
   leia (nomFunc)

   escreval("Digite o codigo da maquina")
   leia (codMaq)
   
   escreval("Digite o total de pecas")
   leia (totalProdu)
   
   escreval("Digite o total de pecas defeituosas")
   leia (totalDefei)
   
   dez <- (totalProdu/10)
   
   se (totalDefei < dez) entao
      escreval ("A máquina não precisa de manutencao")
      se (totalDefei > dez) entao
         escreval ("A máquina precisa de manutencao")
      fimse
   fimse

Fimalgoritmo