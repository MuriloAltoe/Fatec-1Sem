Algoritmo "Media 4 notas if else"

Var

notaum, notadois, notatres, notaquatro, media:real


Inicio

escreval("Digite a 1 nota")

leia(notaum)

escreval("Digite a 2 nota")

leia(notadois)

escreval("Digite a 3 nota")

leia(notatres)

escreval("Digite a 4 nota")

leia(notaquatro)


media<-(notaum + notadois + notatres + notaquatro)/4

escreval("Sua media e", media)

se(media < 6)então

escreval("REPROVADO")

fimse

se(media >= 6)então

escreval("APROVADO")

fimse


Fimalgoritmo