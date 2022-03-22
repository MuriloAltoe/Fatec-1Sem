Algoritmo "natacao"

Var

nome: caracter
atual, nasc, estilo, idade: real

Inicio

escreval("Digite seu nome")
leia(nome)

escreval("Digite Seu ao de nasciento")
leia(nasc)

escreval("Digite o ano atual")
leia(atual)

idade <- atual-nasc

escreval("Escolha seu estilo de natação:")
escreval("1 Nado Livre")
escreval("2 Nado de Costas")
escreval("3 Nado Borboleta")
leia(estilo)

se(estilo = 1 )e( idade <= 16 )entao
escreval("Va para a piscina 01")
fimse

se(estilo = 1 )e( idade > 16 )entao
escreval("Va para a piscina 05")
fimse

se(estilo = 2 )e( idade <=21 )entao
escreval("Va para a piscina 02")
fimse

se(estilo = 2 )e( idade > 21 )entao
escreval("Va para a piscina 03")
fimse

se(estilo = 3 )e( idade < 12)entao
escreval("Va para a piscina 04")
fimse

se(estilo = 3 )e( idade >= 12 )entao
escreval("Va para a piscina 06")
fimse

Fimalgoritmo