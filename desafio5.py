#Desafio 5 - Inverter os caracteres de uma string
#Vitor Moura - www.github.com/vitormoura11
#28/02/2023 - 18h05min


def inverteString(string):
    strFinal = ""   # Variavel strFinal em que as palavras serao armazenadas
    index = len(string) - 1 # Index do ultimo caractere da string 
    # Loop a partir do ultimo indice da string, em que ira pegar seu valor e concatenar em strFinal
    while index >= 0:   
        strFinal += string[index]
        index -= 1
    return strFinal

n = input("Digite a string que deseja inverter os caracteres: ")
print(inverteString(n))

