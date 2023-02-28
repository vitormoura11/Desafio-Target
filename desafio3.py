#Desafio 3 - Faturamento diario
#Vitor Moura - www.github.com/vitormoura11
#28/02/2023 - 16h10min

# Arquivo escolhido json escolhido como fonte de dados
import json

arquivo = open("dados.json", "r")   # Abre o arquivo em .json para ler ele e realizar os calculos
lista = json.loads(arquivo.read())

dias =  0 # Contabilizador para os dias em que ha faturamento

# Variaveis para calcular os menores valores do mes e seus respectivos dias
# Os valores sao inicializados com o primeiro valor da lista tendo em vista que ele eh diferente de 0
menor = lista[0]['valor']
diaMenor = 0
maior = lista[0]['valor']
diaMaior = 0

# Variavel para calcular o total do faturamento no mes
totalFat = 0

# Loop que calcula os valores das variaveis ('dias', 'menor', 'diaMenor', 'maior', 'diaMaior', 'totalFat')
for i in range(len(lista)):
    if lista[i]['valor'] > 0:
        dias+=1
        totalFat += lista[i]['valor']
        if lista[i]['valor'] > maior:
            maior = lista[i]['valor']
            diaMaior = i+1  # Soma 1 ao dia, pois 'i' comeca por '0' e nao 1
        if lista[i]['valor'] < menor:
            menor = lista[i]['valor']
            diaMenor = i+1 # Soma 1 ao dia, pois 'i' comeca por '0' e nao 1

media = totalFat/dias   # Calcula a media do faturamento mensal, total dividido pelos dias em que houve faturamento

# Calcula quantos dias houve faturamento maior que a media mensal
fatMaior = 0
for i in range(len(lista)):
    if lista[i]['valor'] > media:
        fatMaior += 1

print(f"Houve faturamento em {dias} dias, sendo a média mensal {media}")
print(f"O menor valor de faturamento foi {menor} e ocorreu no dia {diaMenor}.")
print(f"O maior valor de faturamento foi {maior} e ocorreu no dia {diaMaior}.")
print(f"Houve {fatMaior} dias em que o faturamento mensal foi superior à média.")
