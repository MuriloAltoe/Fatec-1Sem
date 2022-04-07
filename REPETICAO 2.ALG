Algoritmo "semnome"

Var

   i, num : inteiro
   soma, media : real

Inicio

   escreval("Escreva 5 numeros")

   i <- 1

   enquanto i < 6 faca

      escreval(i, " numero: ")
      leia(num)
      soma <- soma + num

      i <- i+1

   fimenquanto

   escreval("soma: ", soma)

   media <- soma/5

   escreval("media: ", media)





Fimalgoritmo