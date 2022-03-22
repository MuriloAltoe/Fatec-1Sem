Algoritmo "IMC"

Var

cod, nome:caracter
alt, peso, imc:real

Inicio

escreval("Qual seu nome?")
leia(nome)

escreval("Qual seu codigo?")
leia(cod)

escreval("Qual seu peso?")
leia(peso)

escreval("Qual sua altura?")
leia(alt)

imc <- peso/(alt*alt)






escreval("Paciente: ", nome)
escreval("Codigo: ", cod)
escreval("Seu imc e: ", imc)

se(imc < 18) entao
escreval("Magreza")
fimse

se(imc >= 18) e (imc < 25) entao
escreval("Normal")
fimse

se(imc >= 25) e (imc < 30) entao
escreval("Sorepeso")
fimse

se(imc >= 30) e (imc < 35)entao
escreval("Obesidade n1")
fimse

se(imc >= 35) e (imc < 40)entao
escreval("Obesidade n2")
fimse

se(imc >=  40)entao
escreval("Obesidade Morbida")
fimse








Fimalgoritmo